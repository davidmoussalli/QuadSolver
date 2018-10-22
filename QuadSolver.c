#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  float a= atof(argv[1]);
  float b= atof(argv[2]);
  float c= atof(argv[3]);
  double discriminant=0;
  discriminant =  b*b-4*a*c;
  double root1=0;
  double root2=0;
  printf("%f\n",a );
  printf("%f\n",b );
  printf("%f\n",c );
  printf("%f\n",discriminant );
  if (discriminant>0){
     root1 = (-b+sqrt(discriminant) )/(2*a);
     root2 = (-b-sqrt(discriminant))/(2*a);

  }
  else if (discriminant ==0){
    root1 = root2 = -b/(2*a);

  }
  printf("%f\n",root1 );
  printf("%f\n",root2 );
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


