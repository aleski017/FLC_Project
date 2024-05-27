all:
	flex -l project-lex.l;
	bison -vd project.y;
	gcc project.tab.c -ll -o run
