## QuadSolver
This program works as a quadratic equation solver. Using make, we have implemented automation so that our program can be tested with large input files. There are three make commands: make, make test, and make unitTest. "make" compiles the quadSolver.c file, "make test" runs the program with default input "1 2 3", and "make unitTest" compiles the uniTest.c file and runs it with default input "1 2 3". This unitTest.c file is the same as quadSolver.c file, but it tests input to make sure no bad values are used. 

## Programming Standards 
  -GNU Programming Standards
  -FLAGS = -Wall -pedantic -std=c99 
  #Addendum
- Standard used is c99
- Functions are defined as they are used
- Variable should be defined on top of methods
- If a variable is not being used, it should not be there
- Provide comments for every method
- program layout should be prototypes, followed by main, and then functions
- IEEE floating pointers will use standard of 754-2008
- gcc version used is gcc 7.3
