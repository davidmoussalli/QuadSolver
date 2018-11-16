#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
char assertEquals(int a, int b);

int main(int argc, char const *argv[]) {
  if(argc!=4){
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
  assertEquals(a,1);
  printf("b: %.2f\n",b );
  assertEquals(b,2);
  printf("c: %.2f\n",c );
  assertEquals(c,1);
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

char assertEquals(int a, int b){
	if(fabs(a-b)<0.00001)
		return printf("input  ==  number read\n");
	else
		return printf("input != number read\n");
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


