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
char* column_attributes[15];
int countn=0;
void add(char, char*);

char* get_type(char *);
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

%start scope

%%
scope: line {display_symbol_table(); exit(1);}
	  ;
line  : expr     
	  | expr  select_stmt 
	  | expr  insert_stmt 
	  | select_stmt
	  | insert_stmt
	  | drop_stmt
	  | delete_stmt
	  | alter_table_stmt
	  | update_stmt
      ;

// Matches CREATE TABLE statement, it represents the scope of the grammar 
expr: CREATETABLE {add('K', $1);} ID {add('R', $3);}  '(' table_def ')'	{printf("correct");};

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
				| FOREIGNKEY {add('K', $1);} REFERENCES {add('K', $3);} ID '(' ID ')'
				| CHECK {add('K', $1);} '(' condition ')'
				;
				
table_constraint_def: table_constraint
					| table_constraint ',' table_constraint_def
					;


table_constraint: NOTNULL {add('K', $1);} '(' parameters ')'
				| UNIQUE {add('K', $1);}'(' parameters ')'
				| PRIMARYKEY {add('K', $1);} '(' parameters ')'
				| CONSTRAINT {add('K', $1);} ID FOREIGNKEY {add('K', $4);}'(' ID ')' REFERENCES {add('K', $9);} ID '(' ID ')'
				| CHECK {add('K', $1);} '(' condition ')'
				;
				
parameters: ID
			| ID ',' parameters
			;
			
select_stmt : SELECT {add('K', $1);} select_all_or_list FROM {add('K', $4);} ID where_clause
			;
				

select_all_or_list : '*'
				   | select_list
				   ;

select_list : ID
			| ID ',' select_list
			;

where_clause : WHERE {add('K', $1);} condition
			 | /* empty */
			 ;

condition: condition_step2 AND {add('K', $2);} condition
		  | condition_step2 OR {add('K', $2);} condition
		  | condition_step2
		  ;
		  
condition_step2 : values comparison_op values
				| values boolean_comparison_op boolean_values
				| boolean_values boolean_comparison_op values
				;
boolean_values: TRUE {add('C', $1);}
			  | FALSE {add('C', $1);}
			  ;

comparison_op : LS {add('K', $1);}
			  |GR {add('K', $1);}
			  |GE {add('K', $1);}
			  |LE {add('K', $1);}
			  |EQ {add('K', $1);}
			  |NE {add('K', $1);}
			  ;
			  
boolean_comparison_op : EQ
			  |NE 
			  ;
			  
insert_stmt : INSERT {add('K', $1);} ID '(' column_list ')' VALUES {add('K', $7);} insertion
			;
insertion	: '(' value_list ')' 
			| '(' value_list ')' ',' insertion
			;
			
column_list : ID {
				
				column_attributes[countn] = $1;
				/*for(int i =0; i<=15; i++){
					if(column_attributes[i] == 0)
						column_attributes[i] = $1;
						break;
				}*/
			}
			| ID {
				printf("COUNTN -----> %d<------", countn);
				countn++;
				column_attributes[countn] = $1;
			}',' column_list
			;

value_list : values {
			   countn=0;
			   for(int i =0; i<=15; i++){
						column_attributes[i] = 0;
				}
		   }
		   | values ',' value_list
		   | /* empty rule */ {
			   countn=0;
			   for(int i =0; i<=15; i++){
						column_attributes[i] = 0;
				}
		   }
		   ;

values : NUM {
				char* type_id = get_type(column_attributes[countn]);
			    if((strcmp(type_id, "INT") != 0) && (strcmp(type_id, "FLOAT") != 0)
					&& (strcmp(type_id, "int") != 0) && (strcmp(type_id, "float") != 0)){
					printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR");
				}
				else{
					printf("CORREEEEEEECT");
				}
		   }
		   | STRINGVALUE {
				char* type_id = get_type(column_attributes[countn]);
				printf("TYPE_ID %s, $1 %s", type_id, "VARCHAR");
			    if((strcmp(type_id, "VARCHAR") != 0)  && (strcmp(type_id, "varchar") != 0))
					printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR");
				else{
					printf("CORREEEEEEECT");
				}
		   }
		   | boolean_values {
				char* type_id = get_type(column_attributes[countn]);
				printf("TYPE_ID %s, $1 %s", type_id, "BOOLEAN");
			    if((strcmp(type_id, "BOOLEAN") != 0)  && (strcmp(type_id, "boolean") != 0))
					printf("ERRORRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR");
				else{
					printf("CORREEEEEEECT");
				} 
		   }
		   ;


alter_table_stmt: ALTERTABLE {add('K', $1);} ID alter_table_spec
				;
alter_table_spec: DROP {add('K', $1);} COLUMN {add('K', $3);} ID {printf("correct"); exit(0);}
				| RENAME {add('K', $1);} COLUMN {add('K', $3);} ID TO {add('K', $6);}ID {printf("correct"); exit(0);}
				| ALTER {add('K', $1);} COLUMN {add('K', $3);} ID datatype {printf("correct"); exit(0);}
				;

drop_stmt : DROP {add('K', $1);} DATABASE {add('K', $3);}ID {printf("correct"); exit(0);}
		  ;

delete_stmt : DELETE_FROM {add('K', $1);} ID WHERE {add('K', $4);} condition {printf("correct"); exit(0);}
			;

update_stmt : UPDATE {add('K', $1);} ID SET {add('K', $4);} condition WHERE {add('K', $7);}condition {printf("correct"); exit(0);}
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

	printf("\n\n");
}
void add(char c, char * token) {
  //q=search(token);
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

char* get_type(char *id) { 
    char* type_id = "none";
	int i; 
    for(i=0; i<=count-1; i++) {
        if(strcmp(symbol_table[i].id_name, id) == 0) { 

            type_id = symbol_table[i].data_type;
            break;  
        }
    } 
    return type_id;
}
