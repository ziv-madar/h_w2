all: connections

connections: main.c my_mat.c
	gcc -Wall -o $@ $^
