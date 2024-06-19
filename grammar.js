module.exports = grammar({
    //Sets up the name of the language
    name: 'MEDFORD',
    //Rules to parse by. 
    rules: {
      //File defintion or Root of the parse. 
      source_file: $ => repeat($.definition),
      //Definition is each line and currently between
      // Comment - A line that will not be processed.
      // MetadataContentDefinition - Content line. 
      // Macro_definition - definition of a Macro l_definition,ne        
      // Continuation line - a line with out a @,'@, or #.
      // It is worth noting that Empty Lines are pretty much
      // ignored. 
      definition: $ => choice(
        $.Comment_definition,
        $.MetadataContentDefinition,
        $.Macro_definition,        
        $.Continuation_line_definition,
        $.EmptyLine
        // TODO: other kinds of definitions
      ),
      //Line which will not be processed. 
      Comment_definition: $ => seq(
        "#",
        $.comment_content_definition
      ),
      // Content of the file, which starts with the @.
      // A major token is defined, then either data,
      // a minor token definition or a placeholder. 
      MetadataContentDefinition: $ => seq(
        "@",
        $.token_identification,
        choice(
          $.data_definition,
          $.placeholder
        )
      ),
      //Macro Definition. 
      Macro_definition: $ => seq(
        "'@",
        $.macro_identification,
        choice(
          $.data_definition,
          $.placeholder
        )
      ),
      // // Definition of the minor token branch of the grammar. 
      // minor_token_definition: $ => seq(
      //   "-",
      //   $.minor_token_identification,
      //   repeat(" "),
      //   choice(
      //     $.data_definition,
      //     $.placeholder
      //   )
      // ),
      // Choice between Major-Minor or Major 
      token_identification: $ => seq(
        choice(
          seq(
            $.major_token_identification,
            "-",
            $.minor_token_identification
          ),
          $.major_token_identification
        )
      ),
      // Identified by not whitespace. 
      major_token_identification: $ => /[^-\S]+/,
      // Identified by not whitespace. 
      minor_token_identification: $ => /[^\S]+/,
      // Identified by not whitespace. 
      macro_identification: $ => /[^\S]+/,
      // Identified by not starting with an @ or ' or #, and then continues till \n is encountered. 
      Continuation_line_definition: $ => /[^@'#][^\n]+\n/,
      // Identified by space then the data. 
      data_definition: $ => / [^\n]+\n/,
      
      // Continues till \n is encountered. 
      // This needs to be different than data definition
      // or you may encounter a #@ and get an error. 
      comment_content_definition:$ => /[^\n]+\n/,
      // Place Holder [..] special token.
      placeholder: $ => /\[..\]\n/,
      EmptyLine: $ => /\n/
    }
  });