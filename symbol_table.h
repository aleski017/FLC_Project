// symbol_table.h
#ifndef SYMBOL_TABLE_H
#define SYMBOL_TABLE_H

#define SYMBOL_TABLE_SIZE 40
#define MAX_NAME_LEN 100
#define MAX_TYPE_LEN 20

typedef struct {
    char id_name[MAX_NAME_LEN];
    char data_type[MAX_TYPE_LEN];
    char type[MAX_TYPE_LEN];
    int line_no;
} SymbolTableEntry;

extern SymbolTableEntry symbol_table[SYMBOL_TABLE_SIZE];

int add_symbol(const char* id_name, const char* data_type, const char* type, int line_no);
void print_symbol_table();

#endif // SYMBOL_TABLE_H
