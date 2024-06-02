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

%token CREATETABLE SELECT FROM WHERE GROUPBY INSERT LS GR GE LE EQ NE AND OR FALSE TRUE VALUES BOOLEAN VARCHAR INTEGER FLOAT NUM ID

//%type expr line table_def datatype column_def select_list select_stmt column_list where_clause condition expression comparison_op insert_stmt value_list id_or_num

%start line

%%
line  : expr '\n'     
	  | expr  select_stmt
      ;

// Matches CREATE TABLE statement, it represents the scope of the grammar 
expr: CREATETABLE ID '(' table_def ')'	{printf("correct");exit(0);};

// Used to define the creation of attributes in a table. E.g. { attribute1, attribute2 } etc
table_def : column_def
		  | column_def ',' table_def
          ;

column_def : ID datatype
			;

datatype : INTEGER 
         | FLOAT   
         | BOOLEAN 
         | VARCHAR '(' NUM ')' 
         ;

select_stmt : SELECT select_list FROM ID where_clause
			;
		
select_list : ','
			| column_list
			;

column_list : ID datatype
			| ID ',' column_list
			;

where_clause : 
			 | WHERE condition

			 ;

condition : expression comparison_op expression
		  |condition AND condition
		  |condition OR condition
		  ;

expression : ID
		   |NUM
		   |TRUE
		   |FALSE
		   ;

comparison_op : LS
			  |GR
			  |GE
			  |LE
			  |EQ
			  |NE
			  ;

insert_stmt : INSERT ID '(' column_list ')' VALUES value_list
			;

value_list : '(' id_or_num ')'
		   |  '(' id_or_num ')' ',' value_list
		   ;

id_or_num : expression
		  |expression ',' id_or_num
		  ;

%%

int main(void){
  return yyparse();
  }
