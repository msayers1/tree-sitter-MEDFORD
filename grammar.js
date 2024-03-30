module.exports = grammar({
    name: 'MEDFORD',
  
    rules: {
      source_file: $ => repeat($._definition),
      
      definition: $ => choice(
        $.comment_definition,
        $.Metadata_Content_definition,
        $.Macro_definition,
        // TODO: other kinds of definitions
      ),
      comment_definition: $ => seq(
        '#',
        $.comment_content_definition
      ),
      metadata_content_definition: $ => seq(
        '@',
        $.major_token_definition,
        choice(
          choice(
            $.data_defintion,
            $.placeholder
          ),
          $.minor_token_definition
        )
      ),
      Macro_definition: $ => seq(
        "'@",
        $.macro_identifier_definition,
        choice(
          $.data_defintion,
          $.placeholder
        )
      ),
      minor_token_definition: $ => seq(
        '-',
        $.minor_token_definition,
        repeat(' '),
        choice(
          $.data_defintion,
          $.placeholder
        )
      ),
      major_token_definition: $ => /[a-Z]/,
      data_defintion: $ => /[a-Z]/,
      placeholder: $ => /\[..\]/
    }
  });