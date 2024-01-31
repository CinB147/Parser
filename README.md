
Grammatik

>/*
>* <match> ::= <expr> | <op> | <op><op> | <expr> <op> | "(" <op> ")" <expr>
>* <expr>  ::= <literal> | <expr> <op> <expr>  | <expr> "{" <NUMBER> "}" | <expr> "\I" | "." | "(" <expr> ")"
>* <op>    ::= <DOT> | <STAR> | <PLUS>
>* <DOT>   ::= "." <STAR>| "." "{" <NUMBER> "}"
>* <STAR>  ::= <DOT> <STAR> | <expr> <STAR>
>* <PLUS>  ::= <expr> <expr>
>* <literal> ::= <CHAR> | <literal> <CHAR>
>* <CHAR>  ::= "a" | "b" | "c" | ... | "z" | "A" | "B" | "C" | ... | "Z"| <DIGIT>
>* <NUMBER> ::= "0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9"
>* */


