gcc -o parser ast.c parser.tab.c lex.yy.c semantic.c code.c semantic_case.c exp.c
./parser test.c--