%option noyywrap
%{
#include <stdlib.h>
%}

DIGIT    [0-9]
NUM      {DIGIT}+(\.{DIGIT}+)?

LETTER   [a-zA-Z]
ID       {LETTER}+

%%

[ ]     { /* skip blanks */ }

[iI][fF] {return IF;}
{NUM}   {yylval.value = atof(yytext);
         return NUM;}
{ID}    {yylval.lexeme = yytext; return ID;}


"/"     {return '/';}
"*"     {return '*';}
"+"     {return '+';}
"-"     {return '-';}

"("     {return '(';}
")"     {return ')';}
"["     {return '[';}
"]"     {return ']';}
"{"     {return '{';}
"}"     {return '}';}

">"     {return GR;}
"<"     {return LS;}
">="     {return GE;}
"<="     {return LE;}
"!="     {return EQ;}
"=="     {return IN;}


\n      {return '\n';}
  


%%