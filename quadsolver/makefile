input=$(quadSolver input/input.c)\
			$(quadSolver Validator/*.c)
obj=$(input:.gcc=.o)\
		$(Validator:.gcc=.o)

all: MainQuad.c
MainQuad.c: input
	gcc -o Main MainQuad.c


input: input/inputUnitTest.o
	gcc -o IUnitTest input/inputUnitTest.c -lcunit
	./IUnitTest
