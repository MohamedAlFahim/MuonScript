# Grammar

The grammar below for MuonScript is written in a EBNF-style notation:

```ebnf
comment = "//", { any_char } ;
letter = "A" | "B" | "C" | "D" | "E" | "F" | "G" | "H" | "I" | "J"
       | "K" | "L" | "M" | "N" | "O" | "P" | "Q" | "R" | "S" | "T"
       | "U" | "V" | "W" | "X" | "Y" | "Z" | "a" | "b" | "c" | "d"
       | "e" | "f" | "g" | "h" | "i" | "j" | "k" | "l" | "m" | "n"
       | "o" | "p" | "q" | "r" | "s" | "t" | "u" | "v" | "w" | "x"
       | "y" | "z" ;
digit = "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" ;
id = letter, { letter | digit | "_" } ;
dotted_id = id, { "." id } ;
number = digit, { digit }, [ ".", digit, { digit } ] ;

module = { statement } ;
statement = import_statement | import_from_statement ;
import_statement = "import", dotted_id, [ "as", id ] ;
```


