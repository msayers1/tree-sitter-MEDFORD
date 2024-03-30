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
        $.Continuation_line_definition
        // TODO: other kinds of definitions
      ),
      //Line which will not be processed. 
      Comment_definition: $ => seq(
        "#",
        $.comment_content_definition,
        $.endOfLine
      ),
      // Content of the file, which starts with the @.
      // A major token is defined, then either data,
      // a minor token definition or a placeholder. 
      MetadataContentDefinition: $ => seq(
        "@",
        $.major_token_identification,
        choice(
          choice(
            $.data_definition,
            $.placeholder
          ),
          $.minor_token_definition
        ),
        $.endOfLine
      ),
      //Macro Definition. 
      Macro_definition: $ => seq(
        "'@",
        $.macro_identification,
        choice(
          $.data_definition,
          $.placeholder
        ),
        $.endOfLine
      ),
      //Lines which continue the previous line. 
      Continuation_line_definition: $ => seq(
        $.data_definition,
        $.endOfLine
      ),
      // Definition of the minor token branch of the grammar. 
      minor_token_definition: $ => seq(
        "-",
        $.minor_token_definition,
        repeat(" "),
        choice(
          $.data_definition,
          $.placeholder
        )
      ),
      // Identified by not whitespace. 
      major_token_identification: $ => /[^\S]+/,
      // Identified by not whitespace. 
      macro_identification: $ => /[^\S]+/,
      // Identified by not starting with an @ or ' or #, and then continues till \n is encountered. 
      data_definition: $ => /[^@'#][^\n]+/,
      // Continues till \n is encountered. 
      // This needs to be different than data definition
      // or you may encounter a #@ and get an error. 
      comment_content_definition:$ => /[^\n]+/,
      // Place Holder [..] special token.
      placeholder: $ => /\[..\]/,
      // End of line. 
      endOfLine:$ => /\n/
    }
  });