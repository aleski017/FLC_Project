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
[\t ]+      /* ignore whitespace */ ;
[\n ]+      /* ignore newline */ ;

{NUM}   {yylval.value = atof(yytext);
         return NUM;}
{ID}    {yylval.lexeme = yytext; return ID;}
"CREATE TABLE"     {return CREATE;}
"SELECT"     {return SELECT;}
"FROM"     {return WHERE;}
"WHERE"     {return WHERE;}
"GROUP BY"     {return GROUPBY;}
"INSERT INTO"     {return INSERT;}
"int"     {return INTEGER;}
"float"     {return FLOAT;}
"boolean"     {return BOOLEAN;}
"varchar"     {return VARCHAR;}
[-]?{DIGIT}+                { return NUM; }
[-]?{DIGIT}+\.{DIGIT}{1,6}  { return NUM; }
ID   { return ID; }
"false"     {return false;}
"true"     {return true;}
"("     {return '(';}
")"     {return ')';}
"}"     {return '}';}
"{"     {return '{';}
">"     {return GR;}
"<"     {return LS;}
">="     {return GE;}
"<="     {return LE;}
"!="     {return EQ;}
"=="     {return IN;}
","     {return ',';}

\n      {return '\n';}
  


%%