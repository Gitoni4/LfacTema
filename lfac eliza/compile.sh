yacc -d elfac.y
lex elfac.l
gcc lex.yy.c y.tab.c -ly -o t2
./t2 elfac.txt