// //#include "../Structs.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <stdbool.h>
//
// #define try bool _HadError=false;
// #define catch(x) ExitJmp:if(_HadError)
// #define throw(x) _HadError=true;goto ExitJmp
ABC abc;

ABC Validating(FILE *fd, char* UserInput)
{
  int i=0;
  char *SepUserInput=malloc(30);
  abc.A=0;
  abc.B=0;
  abc.C=0;


//printf("\n\ntest\n" );
  //float holder;
  SepUserInput=strtok(UserInput," ");

  // try{
  //   holder=strtonum(SepUserInput);
  //
  // }
  // catch(){
  //   printf("NOPE NO MORE\n" );
  //   exit;
  // }
  char *err1;
  char *err2;
  char *err3;

  while(SepUserInput!=NULL &&i<=3)
  {
      switch (i) {
        case 0:
        if(strtod(SepUserInput,&err1)==0){
          if(err1!=NULL){
              abc.A=100;
          }
          printf("NO LETTERS ACCEPTED IN THE PROGRAM\n");
          fprintf(fd, "\nNO LETTERS ACCEPTED IN THE PROGRAM\n");
          abc.A=100;
          return abc;
        }
        abc.A=strtod(SepUserInput,NULL);
        break;
        case 1:
        if(strtod(SepUserInput,&err2)==0&&err2!=NULL){
          printf("NO LETTERS ACCEPTED IN THE PROGRAM\n");
          fprintf(fd, "\nNO LETTERS ACCEPTED IN THE PROGRAM\n");
          abc.A=100;
          return abc;
        }
        abc.B=strtod(SepUserInput,NULL);
        break;
        case 2:
        if(strtod(SepUserInput,&err3)==0&&err3!=NULL){
          printf("NO LETTERS ACCEPTED IN THE PROGRAM\n");
          fprintf(fd, "\nNO LETTERS ACCEPTED IN THE PROGRAM\n");
          abc.A=100;
          return abc;
        }
        abc.C=strtod(SepUserInput,NULL);
        break;

      }

    i++;
    SepUserInput=strtok (NULL, " ");
    }
  if (i>3 || i<3)
    {
      return abc;
    }

  int a = strlen(err1);
  int b = strlen(err2);
  int c = strlen(err3);


  if(a!=0||b!=0||b!=0)
  {
    abc.A=100;
    printf("NO LETTERS ACCEPTED IN THE PROGRAM\n");
    printf("Error 1: %s, Error 2: %s, Error 3: %s",err1,err2,err3);
    fprintf(fd, "\nError 1: %s, Error 2: %s, Error 3: %s\n",err1,err2,err3);
    return abc;
  }

    free(SepUserInput);
    return abc;
}
