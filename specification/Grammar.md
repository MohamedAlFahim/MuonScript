# Grammar

The grammar below for MuonScript is written in a EBNF-style notation:

```ebnf
(* whitespace and comments may appear anywhere in a program *)
whitespace = ( " " | "\t" | "\n" ), { " " | "\t" | "\n" } ;
comment = "//", { ? any character ? } ;

letter = "A" | "B" | "C" | "D" | "E" | "F" | "G" | "H" | "I" | "J"
       | "K" | "L" | "M" | "N" | "O" | "P" | "Q" | "R" | "S" | "T"
       | "U" | "V" | "W" | "X" | "Y" | "Z" | "a" | "b" | "c" | "d"
       | "e" | "f" | "g" | "h" | "i" | "j" | "k" | "l" | "m" | "n"
       | "o" | "p" | "q" | "r" | "s" | "t" | "u" | "v" | "w" | "x"
       | "y" | "z" ;
digit = "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" ;
id = ( letter | "_" ), { letter | digit | "_" } ;
dotted_id = id, { ".", id } ;
number = digit, { digit }, [ ".", digit, { digit } ] ;
(* the string grammar is based off Python's *)
string = [ string_prefix ], ( short_string | long_string ) ;
string_prefix = "f" | "r" | "fr" ;
short_string = ( "'", { short_string_item }, "'" )
             | ( '"', { short_string_item }, '"' ) ;
long_string = ( "'''", { long_string_item }, "'''" )
            | ( '"""', { long_string_item }, '"""' ) ;
short_string_item = short_string_char | string_escape_seq ;
long_string_item = long_string_char | string_escape_seq ;
short_string_char = ? any character except \ or newline or the quote ? ;
long_string_char = ? any character except \ ? ;
string_escape_seq = "\", ? any character ? ;

module = { statement } ;
statement = import_statement | import_from_statement ;
import_statement = "import", dotted_id, [ "as", id ] ;
import_from_statement = "from", dotted_id, "import",
                      ( "*" | ( module_member_import,
                      { ",", module_member_import } ) ) ;
module_member_import = id, [ "as", id ] ;
```
