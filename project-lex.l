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


"CREATE TABLE"     {return CREATE;}
"SELECT"     {return SELECT;}
"FROM"     {return WHERE;}
"WHERE"     {return WHERE;}

"GROUP BY"     {return GROUPBY;}
[-]?{digit}+                { return NUMBER; }
[-]?{digit}+\.{digit}{1,6}  { return FLOAT_NUM; }
{alpha}({alpha}|{digit})*   { return ID; }
"false"     {return FALSE;}
"true"     {return TRUE;}
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