module.exports = grammar({
    name: 'MEDFORD',
  
    rules: {
      // TODO: add the actual grammar rules
      medford_file: $ => repeat($._definition),

      _definition: $ => choice(
        $.clause_definition,
        $.comment_definition,
        // TODO: other kinds of @@, Macros, 
      ),
      clause_definition: $ => seq(
         '@',
        $.major_tag,
        $.parameter_list,
        $._type,
        $.block
      ),
      comment_definition: $ => seq(
        '#',
       $.comment
      ),
      identifier: $ => /[A-z]+/,

      number: $ => /\d+/
    }
  });