#include "input.c"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
extern char*  inputs();
int main(int argc, char const *argv[]) {
  if(strcmp(inputs(),"test\n")==0){
    printf("PRINTING\n" );

  }
  return 1;
}
