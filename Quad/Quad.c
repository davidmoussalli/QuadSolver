//#include "../Structs.h"
#include <math.h>


roots quad(ABC abc) {
    roots root;
    double a= (double) abc.A;
    double b= (double) abc.B;
    double c= (double) abc.C;

    //double discriminant = 0;
    root.discriminant =  (double)b*(double)b-(double)4*(double)a*(double)c;
    double root1=0;
    double root2=0;

    //printf("Discriminant: %.2f\n",discriminant );
	 
	
    if (root.discriminant>0)
    {
     root1 = (-b+sqrt(root.discriminant) )/(2*(double)a);
     root2 = (-b-sqrt(root.discriminant))/(2*(double)a);

    }
    else if (root.discriminant ==0)
    {
      root1 = root2 = -b/(2*(double)a);

    }else
    {
    	//fprintf(fd,"Root is an imaginary number\n\n");
    	//exit(0);
      	root.flag=-1;
    }
    root.x1 = root1;
    root.x2 = root2;
    //
    // printf("Root 1: %f\n",root1 );
    // printf("Root 2: %f\n\n",root2 );
    return root;
  }
