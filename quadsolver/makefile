input=$(quadSolver input/input.c)\
			$(quadSolver Validator/*.c)
obj=$(input:.gcc=.o)\
		$(Validator:.gcc=.o)

all: MainQuad.c input
MainQuad.c: input
	gcc MainQuad.c


input:
	gcc -o IUnitTest input/inputUnitTest.c -lcunit
	./IUnitTest
