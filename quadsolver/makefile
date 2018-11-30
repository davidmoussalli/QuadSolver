input=$(quadSolver input/input.c)\
			$(quadSolver Validator/*.c)
obj=$(input:.gcc=.o)

all: MainQuad.c

MainQuad.c:IUnitTest
	gcc -o MQuad MainQuad.c
	./MQuad

IUnitTest: input/inputUnitTest.o
	gcc -o IUnitTest.o input/inputUnitTest.c -lcunit
	./IUnitTest.o

clean:
	rm -f ${EXES} core *.log * .o *.exe MQuad IUnitTest
