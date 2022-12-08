all: connections

connections: main.c my_mat.c
	gcc -Wall -o $@ $^

test: connections
	./$< < validation/inputs/input1.txt | diff - validation/outputs/output1.txt
	./$< < validation/inputs/input2.txt | diff - validation/outputs/output2.txt
