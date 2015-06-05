#include "unity.h"
#include "reverseFindText.h"

void setUp(void){}

void tearDown(void){}



void test_InverseFindText_give_A_find_A_should_return_0(void)
{ 
	TEST_ASSERT_EQUAL (0,reverseFindText("A","A"));
}

void test_InverseFindText_give_A_find_B_should_return_0(void)
{ 
	TEST_ASSERT_EQUAL (-1,reverseFindText("A","B"));
}


void test_InverseFindText_give_ASDASFASD_find_B_should_return_minus_1(void)
{ 
	TEST_ASSERT_EQUAL (5,reverseFindText("ASDASBASD","B"));
}


void test_InverseFindText_give_AS_ASBASD_find_B_should_return_9(void)
{ 
	TEST_ASSERT_EQUAL (9,reverseFindText("AS ASSADABASD","B"));
}

void test_InverseFindText_give_ALL_find_LA_should_return_0(void)
{ 
	TEST_ASSERT_EQUAL (-1,reverseFindText("ALL","LA"));
}
void test_InverseFindText_give_LAL_find_XL_should_return_minus_1(void)
{ 
	TEST_ASSERT_EQUAL (-1,reverseFindText("LAL","XL"));
}

void test_InverseFindText_give_WORXDRL_find_RL_should_return_minus_1(void)
{ 
	TEST_ASSERT_EQUAL (5,reverseFindText("WORXDRL","RL"));
}

void test_reverseFindText_give_ALL_find_ALL_should_return_0(void)
{ 
	TEST_ASSERT_EQUAL(0,reverseFindText("ALL","ALL"));
}

void test_reverseFindText_find_BCD_in_ABCDEFG_should_return_2(void)
{
	TEST_ASSERT_EQUAL(1, reverseFindText("ABCDEFG", "BCD")) ;
}

void test_reverseFindText_find_GB_in_ABCDEFGBCHI_should_return_7(void)
{
	TEST_ASSERT_EQUAL(6, reverseFindText("ABCDEFGBCHI", "GB")) ;
}

void test_reverseFindText_find_RARAT_in_RRARAARARARATUI_should_return_9(void)
{
	TEST_ASSERT_EQUAL(8, reverseFindText("RRARAARARARATUI", "RARAT")) ;
}

void test_reverseFindText_find_ABC_in_RRARAARARARATUI_should_return_minus1(void)
{
	TEST_ASSERT_EQUAL(-1, reverseFindText("RRARAARARARATUI", "ABC")) ;
}

void test_reverseFindText_find_lad_in_Hello_my_name_is_Alladin_should_return_21(void)
{
	TEST_ASSERT_EQUAL(20, reverseFindText("Hello, my name is Alladin", "lad")) ;
}

void test_reverseFindText_find_coma_and_space_in_Hello_my_name_is_Alladin_should_return_6(void)
{
	TEST_ASSERT_EQUAL(5, reverseFindText("Hello, my name is Alladin", ", ")) ;
}








