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


%union {
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }

%token <value>  NUM
%token CREATE SELECT FROM WHERE GROUPBY INSERT LS GR GE LE EQ IN false true
%token <lexeme> ID
%token UNARY_MINUS
%token BOOLEAN VARCHAR INTEGER FLOAT

%type <value> expr
%type <value> line
%type <value> table_def
%type <value> datatype

%start line

%%
line  : expr '\n'      {$$ = $1; printf("Result: %f\n", $$); exit(0);}
      ;

// Matches CREATE TABLE statement, it represents the scope of the grammar 
expr: CREATE ID '(' table_def ')'	{
		printf("Recognized");
		$$ = 0; 
		exit(0); 
		};
// Used to define the creation of attributes in a table. E.g. { attribute1, attribute2 } etc
table_def : datatype ID {
				
				$$ = 0;
				}
			| datatype ID ',' table_def{
				
				$$ = 0;
				};
datatype: INTEGER {$$ = 0;}
		| FLOAT {$$ = 0;}
		|BOOLEAN {$$ = 0;}
		|VARCHAR'('')' {$$ = 0;}
		;
%%

#include "lex.yy.c"
	
int main(void)
{
  return yyparse();}
