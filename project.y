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

%token CREATETABLE SELECT FROM WHERE GROUPBY INSERT LS GR GE LE EQ NE AND OR FALSE ALTER TRUE RENAME TO VALUES BOOLEAN VARCHAR STRINGVALUE INTEGER CONSTRAINT ALTERTABLE COLUMN FLOAT CHECK DATE NUM ID NOTNULL UNIQUE PRIMARYKEY FOREIGNKEY REFERENCES DROP DATABASE DELETE_FROM UPDATE SET

//%type expr line table_def datatype column_def select_list select_stmt where_clause condition expression comparison_op insert_stmt value_list id_or_num drop_stmt insert_column_list delete_stmt update_stmt

%start line

%%
line  : expr '\n'     
	  | expr  select_stmt
	  | select_stmt
	  | insert_stmt
	  | drop_stmt
	  | delete_stmt
	  | alter_table_stmt
	  | update_stmt
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
				| PRIMARYKEY
				| UNIQUE
				| FOREIGNKEY REFERENCES ID '(' ID ')'
				| CHECK '(' condition ')'
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
			
select_stmt : SELECT select_all_or_list FROM ID where_clause {printf("correct"); exit(0);};
			;
				

select_all_or_list : '*'
				   | select_list
				   ;

select_list : ID
			| ID ',' select_list
			;

where_clause : WHERE condition
			 |
			 ;

condition : values comparison_op values
		  | values boolean_comparison_op boolean_values
		  | boolean_values boolean_comparison_op values
		  | condition AND condition
		  | condition OR condition
		  ;

values : STRINGVALUE
		   | NUM
		   | ID
		   ;
boolean_values: TRUE
			  | FALSE
			  ;

comparison_op : LS 
			  |GR 
			  |GE 
			  |LE 
			  |EQ 
			  |NE 
			  ;
			  
boolean_comparison_op : EQ
			  |NE 
			  ;
			  
insert_stmt : INSERT ID VALUES insertion {printf("correct"); exit(0);}
			| INSERT ID '(' column_list ')' VALUES insertion {printf("correct"); exit(0);}
			;
insertion	: '(' value_list ')' 
			| '(' value_list ')' ',' insertion
			;
			
column_list : ID 
			| ID ',' column_list
			;

value_list : values 
		   | values ',' value_list
		   ;

alter_table_stmt: ALTERTABLE ID DROP COLUMN ID {printf("correct"); exit(0);}
				| ALTERTABLE ID RENAME COLUMN ID TO ID {printf("correct"); exit(0);}
				| ALTERTABLE ID ALTER COLUMN ID datatype {printf("correct"); exit(0);}
				;

drop_stmt : DROP DATABASE ID {printf("correct"); exit(0);}
		  ;

delete_stmt : DELETE_FROM ID WHERE condition {printf("correct"); exit(0);}
			;

update_stmt : UPDATE ID SET condition WHERE condition {printf("correct"); exit(0);}
            ;

%%

int main(void){
  return yyparse();
  }
