input=$(quadSolver input/input.c)\
			$(quadSolver Validator/*.c)\
			$(quadSolver Quad/*.c)
obj=$(input:.gcc=.o)

all: MainQuad.c
#RUN make, then run ./IUnitTest then run make

test: test1 test2
	

MainQuad.c:IUnitTest
	gcc -o MQuad MainQuad.c -lm
	./MQuad

IUnitTest: input/inputUnitTest.o
	gcc -o IUnitTest input/inputUnitTest.c -lcunit
	#./IUnitTest
	
test1:
	gcc -o valid.o Validator/validatorUnitTest.c -lcunit 
	./valid.o
	
test2:
	gcc -o quad.o Quad/QuadUnitTest.c -lcunit -lm
	./quad.o

clean:
	rm -f *.log *.o *.exe *.out MQuad IUnitTest
