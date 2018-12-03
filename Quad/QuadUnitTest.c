#include <stdio.h>
#include "../Structs.h"
#include <stdlib.h>
#include <string.h>
#include "Quad.c"
#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>
extern roots quad(ABC abc);
//
// void assert_eq(str,a,b) {
//   if( a != b ) {
//     fprintf(cunit_log, "%s  LINE %d: %s, %d !== %d\n",
//               __FILE__ , __LINE__ , str ,  a , b );
//   }

void testRoots(){
	ABC abc;

  abc.A = 1;
  abc.B = 2;
  abc.C = 1;
  roots root = quad(abc);
	double a = -1;
	double b = -1;
	CU_ASSERT_EQUAL(root.x1,a);
	CU_ASSERT_EQUAL(root.x2,b);

  abc.A = 1e34;
  abc.B = 2e34;
  abc.C = 1e34;
  root = quad(abc);
  a = -1;
  b = -1;
	CU_ASSERT_EQUAL(root.x1,a);
	CU_ASSERT_EQUAL(root.x2,b);
}

void testDiscriminant(){
	ABC abc;
  abc.A = 1;
  abc.B = 2;
  abc.C = 1;
  roots root = quad(abc);
	double discriminant = 0;
  CU_ASSERT_EQUAL(root.discriminant,discriminant);

  abc.A = 1e34;
  abc.B = 2e34;
  abc.C = 1e34;
  root = quad(abc);
  discriminant = 0;
  CU_ASSERT_EQUAL(root.discriminant,discriminant);

}
void testImaginaryRoots(){
	ABC abc;
  abc.A = 2;
  abc.B = 2;
  abc.C = 1;
  roots root = quad(abc);
	int flag = -1;
	CU_ASSERT_EQUAL(root.flag,flag);

  abc.A = 5;
  abc.B = 4;
  abc.C = 1;
  root = quad(abc);
	flag = -1;
	CU_ASSERT_EQUAL(root.flag,flag);
}

int main()
{
	CU_initialize_registry();
	CU_pSuite suite = CU_add_suite("\tUNIT TEST FOR CALCULATION OF ROOTS", 0, 0);

  CU_add_test(suite, "TEST ROOTS:\troot.x1==a, root.x2==b", testRoots);
	CU_add_test(suite, "TEST DISCRIMINANT:\tabc.discriminant==discriminant", testDiscriminant);
  CU_add_test(suite, "TEST IMAGINARY ROOTS:\tabc.flag==flag", testImaginaryRoots);

	CU_basic_set_mode(CU_BRM_VERBOSE);
  CU_basic_run_tests();
  CU_cleanup_registry();

  return 0;
}
