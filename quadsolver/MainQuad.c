#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include "input/input.c"
extern float * input(char const *input1,char const *input2,char const *input3);


int main(int argc, char const *argv[]) {
inputs(argv[1],argv[2],argv[3]);
//float *verifiedInputs;
//verifiedInputs=inputs(argv[1],argv[2],argv[3]); unsure how to pass arrays
//Outputing=Quad(VeifiedInputs); does not work yet
//Output(Outputing); does not work yet
return 0;
}
/*  if(argc!=4){
  	printf("Usage ./a.out input1 input2 input3\nProgram Exitted\n");
  	exit(-1);
  }
  if(isalpha(argv[1][0])||isalpha(argv[2][0])||isalpha(argv[3][0])){
  	printf("Usage ./a.out input1 input2 input3\nProgram Exitted\n");
  	exit(-1);
  }

  float a= atof(argv[1]);
  float b= atof(argv[2]);
  float c= atof(argv[3]);



  double discriminant=0;
  discriminant =  b*b-4*a*c;
  double root1=0;
  double root2=0;
  printf("a: %.2f\n",a );
  printf("b: %.2f\n",b );
  printf("c: %.2f\n",c );
  printf("Discriminant: %.2f\n",discriminant );
  if (discriminant>0){
     root1 = (-b+sqrt(discriminant) )/(2*a);
     root2 = (-b-sqrt(discriminant))/(2*a);

  }
  else if (discriminant ==0){
    root1 = root2 = -b/(2*a);

  }else {
  	printf("Root is an imaginary number\n\n");
  	exit(0);
  }
  printf("Root 1: %f\n",root1 );
  printf("Root 2: %f\n\n",root2 );
  return 0;
}

/*QuadSolver
Define double a, b, c, root1, root2, discriminant
  Get a,b,c from user
  discriminant =  b*b-4*a*c
  If discriminant>0
    Root1 = (-b+sqrt(discriminant))/(2*a)
    Root2 = (-b-sqrt(discriminant))/(2*a)
    Print root1 and root2
  Else if discriminant ==0
    root1 = root2 = -b/(2*a)
    Print root1 and root2 which are equal
  End If
//code has not taken into factor of roots that are not real
End QuadSolver
*/
@c -*-texinfo-*-
@c This is part of the GNU Emacs Lisp Reference Manual.
@c Copyright (C) 1990, 1991, 1992, 1993, 1994, 1999
@c   Free Software Foundation, Inc.
@c See the file elisp.texi for copying conditions.
@c Copyright (C)  2018  Safwan Kadir, Dakota Grant, David Moussalli.
  Permission is granted to copy, distribute and/or modify this document
  under the terms of the GNU Free Documentation License, Version 1.3
  or any later version published by the Free Software Foundation;
  with no Invariant Sections, no Front-Cover Texts, and no Back-Cover
  Texts.  A copy of the license is included in the section entitled ``GNU
  Free Documentation License''.
