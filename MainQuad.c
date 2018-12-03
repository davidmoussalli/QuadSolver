#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "input/input.c"
#include "Structs.h"
#include "Validator/validator.c"
#include "Quad/Quad.c"
extern char* input();
extern ABC Validating(FILE *fd, char* UserInput);
extern roots quad(ABC abc);

ABC abc;
//roots root;



int main(int argc, char const *argv[])
{
  FILE * fd = fopen("logFile.log","a");

    //abc.A=100;
    // abc.B=100;
    // abc.C=100;
  printf("Please input numbers followed by space ex: 1 2 1\n" );
  char* UserInput=malloc(30);
  UserInput=inputs();
  char* ValUserInput=malloc(30);
  abc=Validating(fd, UserInput);

  if(abc.A==100)
  {
  	return 0;
  }

  printf("A= %f, B= %f, C=%f\n",abc.A,abc.B,abc.C );
  fprintf(fd, "\nA= %f, B= %f, C=%f\n",abc.A,abc.B,abc.C );
 	
  roots root = quad(abc); 
  printf("Discriminant: %g\n",(double)root.discriminant);
  fprintf(fd, "Discriminant: %g\n",(double)root.discriminant);
  if(root.flag==-1)
  {
    printf("Roots are imaginary\n");
    fprintf(fd,"Roots are imaginary\n");
  }else
  {
    printf("Roots are %f and %f\n",root.x1,root.x2);
    fprintf(fd,"Roots are %f and %f\n",root.x1,root.x2);
  }

  fclose(fd);
  return 0;
}
  
  
