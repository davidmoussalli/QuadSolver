all: quadSolver.c
	gcc quadSolver.c -lm
	#usage ./a.out input1 input2 input3

test: quadSolver.c
	./a.out 1 2 1

unitTest: unitTest.c
	gcc unitTest.c -lm
	.'a.out 1 2 1
