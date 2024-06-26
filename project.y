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

//GLOBAL VARIABLES
int yylex();
//Keeps track of how many entries in symbol table
int count=0;
char type[10];
//Keeps track of the name of the columns one wants to insert in INSERT INTO statement
char* column_attributes[15] = {NULL};
//Keeps track of how many values one wants to insert in INSERT INTO statement
int countn=0;

//FUNCTIONS
void add(char, char*);
int search(char* token);
char* get_type(char *);
void insert_type(char *);
void display_symbol_table();
char * attribute_name;
%}


%union {
       char* lexeme;			//identifier
       double value;			//value of an identifier of type NUM
       }

%token <lexeme> SELECT FROM WHERE GROUPBY INSERT LS GR GE LE EQ NE STAR AND OR FALSE ALTER TRUE RENAME TO VALUES BOOLEAN VARCHAR STRINGVALUE INTEGER CONSTRAINT ALTERTABLE COLUMN FLOAT CHECK DATE NUM NOTNULL UNIQUE PRIMARYKEY FOREIGNKEY REFERENCES DROP DATABASE DELETE_FROM UPDATE SET CREATETABLE ID

%left OR
%left AND

%start scope

%%
//START OF SCOPE ->
scope: {printf("TO END YOUR STATEMENT, WRITE 'end'\n");}line {printf("\nCorrect Statement\n");display_symbol_table(); exit(0);}
	  ;
	  
line  : pile_expr 
	  ;
pile_expr: expr
		 | expr pile_expr
		 ;

// TYPES STATEMENTS POSSIBLE IN SQL
expr: create_stmt
	| insert_stmt
	| drop_stmt
	| delete_stmt
	| alter_table_stmt
	| update_stmt
	| select_stmt
	;

create_stmt: CREATETABLE {add('K', $1);} ID {add('R', $3);}  '(' table_def ')';

//CREATE STATEMENT PRODUCTIONS E.g. { attribute1, attribute2 } etc
table_def : column_def 
		  | column_def ',' table_constraint_def
		  | column_def ',' table_def
          ;

column_def : ID {attribute_name = $1;} datatype column_costraint_def
			; 

//DATA TYPES FOR COLUMNS IN A RELATION
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

//CONTRAINTS PRODUCTIONS
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
			
//SELECT STATEMENT PRODUCTIONS
select_stmt : SELECT {add('K', $1);} select_all_or_list FROM {add('K', $4);} ID where_clause
			;
				
select_all_or_list : STAR
				   | select_list
				   ;

select_list : ID 
			| ID ',' select_list
			;

where_clause : WHERE {add('K', $1);} condition
			 | /* empty */
			 ;

//CONSTANT VALUES
values: NUM{add('C', $1);}
		|STRINGVALUE{add('C', $1);}
		|ID
		;
		
boolean_values: TRUE {add('C', $1);}
			  | FALSE {add('C', $1);}
			  ;

//PRODUCTIONS FOR CONDITIONAL STATEMENTS
condition: condition_step2 AND {add('K', $2);} condition
		  | condition_step2 OR {add('K', $2);} condition
		  | condition_step2
		  ;
		  
condition_step2 : values comparison_op values
				| values boolean_comparison_op values
				| values boolean_comparison_op boolean_values
				| boolean_values boolean_comparison_op values
				;
comparison_op : LS {add('K', $1);}
			  |GR {add('K', $1);}
			  |GE {add('K', $1);}
			  |LE {add('K', $1);}
			  ;
			  
boolean_comparison_op : EQ
			  |NE 
			  ;
			  
//INSERT STATEMENT PRODUCTIONS
insert_stmt : INSERT {add('K', $1);} ID {if(search($3)!=-1){
											printf("This table does not exist");
											exit(0);}}
			'(' column_list ')' VALUES {add('K', $8);} insertion
			;
insertion	: '(' value_list ')' 
			| '(' value_list ')' ',' insertion
			;
			
column_list : ID {
				column_attributes[countn] = $1;
				countn=0;
			}
			| ID {

				
				column_attributes[countn] = $1;
				countn++;
			}',' column_list
			;

value_list : insert_values {
			   countn=0;
		   }
		   | insert_values ',' value_list
		   | /* empty rule */
		   ;

//WE CHECK IF THE TYPE IN INPUT MATCHES WITH TYPE OF COLUMN
insert_values : NUM {
				if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "INT") != 0) && (strcmp(type_id, "FLOAT") != 0)
						&& (strcmp(type_id, "int") != 0) && (strcmp(type_id, "float") != 0))
						{
						printf("Type Error. Trying to assign %s to Int\n", type_id); exit(0);}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
				add('C', $1);
		   }
		   | STRINGVALUE {
			    if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "VARCHAR") != 0)  && (strcmp(type_id, "varchar") != 0)){
					printf("Type Error. Trying to assign %s to String", type_id); exit(0);}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
				add('C', $1);
		   }
		   | boolean_values {
			    if(column_attributes[countn]!= NULL){
					char* type_id = get_type(column_attributes[countn]);
					if((strcmp(type_id, "BOOLEAN") != 0)  && (strcmp(type_id, "boolean") != 0)){
					printf("Type Error. Trying to assign %s to Boolean\n", type_id); exit(0);}
				}
				else{printf("You are trying to insert too many values\n");exit(0);}
				countn++;
		   }
		   ;

//ALTER TABLE STATEMENT PRODUCTIONS
alter_table_stmt: ALTERTABLE {add('K', $1);} ID alter_table_spec
				;
alter_table_spec: DROP {add('K', $1);} COLUMN {add('K', $3);} ID 
				| RENAME {add('K', $1);} COLUMN {add('K', $3);} ID TO {add('K', $6);} ID {add('A', $8);}
				| ALTER {add('K', $1);} COLUMN {add('K', $3);} ID datatype 
				;

//PRODUCTIONS FOR OTHER STATEMENTS
drop_stmt : DROP {add('K', $1);} DATABASE {add('K', $3);}ID
		  ;

delete_stmt : DELETE_FROM {add('K', $1);} ID WHERE {add('K', $4);} condition
			;

update_stmt : UPDATE {add('K', $1);} ID SET {add('K', $4);} condition WHERE {add('K', $7);}condition
            ;

%%

int main(void){
	yyparse();
}

//THIS FUNCTION CHECKS WHETHER IF TOKEN IS ALREADY IN SYMBOL TABLE
int search(char *token) {
	int i;
	for(i=count-1; i>=0; i--) {
		if(strcmp(symbol_table[i].id_name, token)==0) {
			return -1;
			break;
		}
	}
	return 1;
}

//DISPLAYS IN OUTPUT THE SYMBOL TABLE AND CLEARS IT FOR FURTHER RUNS
void display_symbol_table(){
	printf("\n\n");
	printf("\nSYMBOL        DATATYPE          TYPE \n");
	printf("_______________________________________\n\n");
	int i=0;
	for(i = 0; i < count; i++) {
		printf("%-15s %-15s %-15s\n", symbol_table[i].id_name, symbol_table[i].data_type, symbol_table[i].type);
	}
	for(i = 0; i < count; i++) {
		symbol_table[i].id_name= NULL; symbol_table[i].data_type=NULL ;symbol_table[i].type=NULL;
	}
	printf("\n\n");
}

//ADDS TOKEN INTO SYMBOL TABLE
void add(char c, char * token) {
  if((c == 'K' || c == 'C' )){
	  //IF STMT CHECK WHETHER IF TOKEN ALREADY EXISTS
	  if(search(token)!=-1){
			if(c == 'K') {
				symbol_table[count].id_name= strdup(token);
				symbol_table[count].data_type=strdup("N/A");
				symbol_table[count].type=("Keyword\t");
				count++;
			}
			else if(c == 'C') {
				symbol_table[count].id_name= strdup(token);
				symbol_table[count].data_type=strdup("CONST");
			
				symbol_table[count].type=strdup("Constant");
				count++;
			}
			return;
		}
  }
  else{
	//IF STMT CHECKS WHETHER IF TOKEN IS ALREADY IN SYMBOL TABLE AND GIVES AN ERROR MESSAGE IF IT DOES
	if(search(token)!=-1){
		if(c == 'R') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup("N/A");
			symbol_table[count].type=strdup("Relation");
			count++;
		}
		else if(c == 'A') {
			symbol_table[count].id_name= strdup(token);
			symbol_table[count].data_type=strdup(type);
		
			symbol_table[count].type=strdup("Attribute");
			count++;
		}
    }else{printf("This token alread exists--------> %s", token);exit(0);}
  }
}

//INSERT TYPE INTO CURRENT INSTANCE IN SYMBOL TABLE
void insert_type(char * value_type) {
	strcpy(type, value_type);
}

//RETRIEVES TYPE OF A GIVEN TOKEN
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
