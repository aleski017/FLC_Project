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
struct dataType {
        char * id_name;
        char * data_type;
		char * type;
} symbol_table[40];
//int yywrap();
int yylex();
int count=0;
int q;
char type[10];
int countn=1;
void add(char, char*);
void insert_type();
int search(char *);
void insert_type(char *);
void display_symbol_table();
char * attribute_name;
extern char* yytext;
%}


%union {
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }

%token <lexeme> SELECT FROM WHERE GROUPBY INSERT LS GR GE LE EQ NE AND OR FALSE ALTER TRUE RENAME TO VALUES BOOLEAN VARCHAR STRINGVALUE INTEGER CONSTRAINT ALTERTABLE COLUMN FLOAT CHECK DATE NUM NOTNULL UNIQUE PRIMARYKEY FOREIGNKEY REFERENCES DROP DATABASE DELETE_FROM UPDATE SET
%token <lexeme> CREATETABLE ID
//Conflicts fixed
%left OR 
%left AND

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
expr: CREATETABLE {add('K', $1);} ID {add('R', $3);}  '(' table_def ')'	{printf("correct");   display_symbol_table(); exit(0);};

// Used to define the creation of attributes in a table. E.g. { attribute1, attribute2 } etc
table_def : column_def 
		  | column_def ',' table_constraint_def
		  | column_def ',' table_def
          ;

column_def : ID {attribute_name = $1;} datatype column_costraint_def
			; 

datatype : INTEGER {insert_type($1); add('A', attribute_name);}
         | INTEGER {insert_type($1); add('A', attribute_name);}'(' NUM ')'
         | FLOAT {insert_type($1); add('A', attribute_name);}'(' NUM ')'
         | BOOLEAN {insert_type($1); add('A', attribute_name);}
         | VARCHAR {insert_type($1); add('A', attribute_name);}'(' NUM ')' 
		 | DATE{insert_type($1); add('A', attribute_name);}
         ;
 
column_costraint_def: column_costraint 
					|/* empty */
					;


column_costraint: NOTNULL {add('K', $1);}
				| PRIMARYKEY {add('K', $1);}
				| UNIQUE {add('K', $1);}
				| FOREIGNKEY {add('K', $1);} REFERENCES ID '(' ID ')'
				| CHECK {add('K', $1);} '(' condition ')'
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
			
select_stmt : SELECT select_all_or_list FROM ID where_clause {printf("correct"); display_symbol_table(); exit(0);};
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
	yyparse();
	
	
}

int search(char *token) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, token)) {
			return -1;
			break;
		}
	}
	return 1;
}
void display_symbol_table(){
	printf("\n\n");
	printf("\nSYMBOL        DATATYPE          TYPE \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i = 0; i < count; i++) {
		printf("%-15s %-15s %-15s\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type);
	}

	for(i=0;i<count;i++) {
		/*free(symbol_table[i].id_name);
		free(symbol_table[i].type);*/
	}
	printf("\n\n");
}
void add(char c, char * token) {
  q=search(token);
  if(search(token)){
    if(c == 'K') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].type=("Keyword\t");
			count++;
		}
		else if(c == 'R') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].type=strdup("Relation");
			count++;
		}
		else if(c == 'A') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup(type);
			symbol_table[count].type=strdup("Attribute");
			count++;
		}
		else if(c == 'C') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup("CONST");
			symbol_table[count].type=strdup("Constant");
			count++;
		}
  }
  printf("%d", count);
}

void insert_type(char * value_type) {
	strcpy(type, value_type);
}