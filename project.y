%{
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdio.h>
void yyerror(const char *s)
{
    fprintf(stderr, "%s\n", s);
    exit(1);
}

int yylex(void);
%}


typedef struct Symbol {
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }

%token <value>  NUM
%token IF
%token <lexeme> ID
%token UNARY_MINUS
%token GE LE IN EQ GR LS
%right '-' '+'
%left '*' '/'
%nonassoc SIGN

%type <value> expr
%type <value> line
%type <value> condition
%type <value> stmt
%type <value> assignment

%start line

%%
line  	: stmt '\n'      {$$ = $1; printf("Result: %f\n", $$); exit(0);}
		;
		
stmt	: IF '(' condition ')' '{' stmt'}' {
		if($3 == 0)
			{$$ = $6;} 
		else 
			{$$ = 0; printf("ciao");}}
		| expr;
		| assignment;
		;
		
assignment	: ID '=' NUM {$1.value = $3;}
			;	
			
expr 	: expr '/' expr  {$$ = $1 / $3;}
		| expr '*' expr  {$$ = $1 * $3;}
		| expr '+' expr  {$$ = $1 + $3;}
		| expr '-' expr  {$$ = $1 - $3;}
		| '-' expr       %prec SIGN{$$ = -$2;}
		| '+' expr       %prec SIGN{$$ = $2;}
		| NUM            {$$ = $1;}
		| ID             {$$= 0; printf("IDENTIFICATORE = %s\n",$1);}
		;	
		
condition	: expr GR expr  {$$ = $1 < $3;}
			| expr LS expr  {$$ = $1 > $3;}
			| expr GE expr  {$$ = $1 >= $3;}
			| expr LE expr  {$$ = $1 <= $3;}
			| expr IN expr  {$$ = $1 != $3;}
			| expr EQ expr  {$$ = $1 == $3; printf("eguaglianza");}
			;
%%

#include "lex.yy.c"
	
int main(void)
{
  return yyparse();}
