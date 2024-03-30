module.exports = grammar({
    name: 'MEDFORD',
  
    rules: {
      source_file: $ => repeat($._definition),
      
      definition: $ => choice(
        $.Comment_definition,
        $.Metadata_Content_definition,
        $.Macro_definition,
        $.Continuation_line_definition
        // TODO: other kinds of definitions
      ),
      Comment_definition: $ => seq(
        '#',
        $.comment_content_definition,
        empty
      ),
      metadata_content_definition: $ => seq(
        '@',
        $.major_token_identification,
        choice(
          choice(
            $.data_defintion,
            $.placeholder
          ),
          $.minor_token_definition
        ),
        $.empty
      ),
      Macro_definition: $ => seq(
        "'@",
        $.macro_identification,
        choice(
          $.data_defintion,
          $.placeholder
        ),
        $.empty
      ),
      minor_token_definition: $ => seq(
        '-',
        $.minor_token_definition,
        repeat(' '),
        choice(
          $.data_definition,
          $.placeholder
        )
      ),
      // An entity can be named, numeric (decimal), or numeric (hexadecimal). The
      // longest entity name is 29 characters long, and the HTML spec says that
      // no more will ever be added.
      major_token_identification: $ => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});/,
      macro_identification: $ => /&(#([xX][0-9a-fA-F]{1,6}|[0-9]{1,5})|[A-Za-z]{1,30});/,
      data_defintion: $ => token.immediate(prec(1, /[^\n]+/)),
      placeholder: $ => /\[..\]/,
      empty:$ => /\n/,
    }
  });