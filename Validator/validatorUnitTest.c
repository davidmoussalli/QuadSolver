#include <stdio.h>
#include "../Structs.h"
#include <stdlib.h>
#include <string.h>
#include "validator.c"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
#include <CUnit/Automated.h>
extern ABC Validating(FILE *fd, char* UserInput);
//
// void assert_eq(str,a,b) {
//   if( a != b ) {
//     fprintf(cunit_log, "%s  LINE %d: %s, %d !== %d\n",
//               __FILE__ , __LINE__ , str ,  a , b );
//   }
FILE *fd;
void equal(){
	
	ABC abc;
	char * input = malloc(30);
	strcpy(input,"1 2 1\n");
	abc= Validating(fd,input);

	double a = 1;
	double b = 2;
	double c = 1;

	CU_ASSERT_EQUAL(abc.A,a);
	CU_ASSERT_EQUAL(abc.B,b);
	CU_ASSERT_EQUAL(abc.C,c);
}

int main()
{
	fd = fopen("logFile.log","a");
	CU_set_output_filename("logFile.xml");
	CU_initialize_registry();
	CU_pSuite suite = CU_add_suite("UNIT TEST", 0, 0);

  CU_add_test(suite, "TEST abc.A==A,abc.B==B,abc.C==C", equal);
	//CU_add_test(suite, "TEST abc.A==A,abc.B==B,abc.C==C", equal1);

	CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();

  return 0;
}
