input=$(quadSolver input/input.c)\
			$(quadSolver Validator/*.c)\
			$(quadSolver Quad/*.c)
obj=$(input:.gcc=.o)

all: MainQuad.c
#RUN make, then run ./IUnitTest then run make

MainQuad.c:IUnitTest
	gcc -o MQuad MainQuad.c -lm
	./MQuad

IUnitTest: input/inputUnitTest.o
	gcc -o IUnitTest input/inputUnitTest.c -lcunit
	./IUnitTest

clean:
	rm -f *.log *.o *.exe MQuad IUnitTest
