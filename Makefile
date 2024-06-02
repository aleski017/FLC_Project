all:
	flex -l project-lex.l;
	bison -vd project.y;
	gcc -o run lex.yy.c project.tab.c -ll


clean:
	rm lex.yy.c
	rm run