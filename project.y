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

%token CREATETABLE SELECT FROM WHERE GROUPBY INSERT LS GR GE LE EQ NE AND OR FALSE TRUE VALUES BOOLEAN VARCHAR INTEGER CONSTRAINT FLOAT CHECK DATE NUM ID NOTNULL UNIQUE PRIMARYKEY FOREIGNKEY REFERENCES

//%type expr line table_def datatype column_def select_list select_stmt column_list where_clause condition expression comparison_op insert_stmt value_list id_or_num

%start line

%%
line  : expr '\n'     
	  | expr  select_stmt
      ;

// Matches CREATE TABLE statement, it represents the scope of the grammar 
expr: CREATETABLE ID '(' table_def ')'	{printf("correct"); exit(0);};

// Used to define the creation of attributes in a table. E.g. { attribute1, attribute2 } etc
table_def : column_def 
		  | column_def ',' table_constraint_def
		  | column_def ',' table_def
          ;

column_def : ID datatype column_costraint_def
			|ID datatype
			;

datatype : INTEGER 
         | INTEGER '(' NUM ')'
         | FLOAT '(' NUM ')'
         | BOOLEAN 
         | VARCHAR '(' NUM ')' 
		 | DATE
         ;
 
column_costraint_def: column_costraint
					| column_costraint column_costraint
					;


column_costraint: NOTNULL
				|PRIMARYKEY
				|UNIQUE
				|FOREIGNKEY REFERENCES ID '(' ID ')'
				|CHECK '(' condition ')'
				;
				
table_constraint_def: table_constraint
					| table_constraint ',' table_constraint_def
					;


table_constraint: NOTNULL '(' parameters ')'
				| UNIQUE '(' parameters ')'
				| PRIMARYKEY '(' parameters ')'
				| CONSTRAINT ID FOREIGNKEY '(' ID ')' REFERENCES ID '(' ID ')'
				| CHECK '(' condition ')'
				;
				
parameters: ID
			| ID ',' parameters
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

condition : values comparison_op values
		  | values numeric_comparison_op NUM
		  | NUM numeric_comparison_op values
		  |condition AND condition
		  |condition OR condition
		  ;

values : ID
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
			  
numeric_comparison_op : LS 
			  |GR 
			  |GE 
			  |LE 
			  ;
			  
insert_stmt : INSERT ID '(' column_list ')' VALUES value_list
			;

value_list : '(' id_or_num ')'
		   |  '(' id_or_num ')' ',' value_list
		   ;

id_or_num : values
		  |values ',' id_or_num
		  ;

%%

int main(void){
  return yyparse();
  }
