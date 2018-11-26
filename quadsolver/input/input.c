
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


float * inputs(char const *input1,char const *input2,char const *input3) {

float A_B_C[3];
    A_B_C[0]= atof(input1);
    A_B_C[1]= atof(input2);
    A_B_C[2]= atof(input3);
printf("%f %f %f\n",A_B_C[0],A_B_C[1],A_B_C[2] );
return A_B_C;
}
