#include "unity.h"
#include "insurance.h"
#include "insuranceVariables.h"
#include <stdlib.h>
# define number 1
//Required by the test unity framework
void setUp() {}

//Required by the unity framework
void tearDown() {}

struct points *p;

void test_alcohol(void)
{
    TEST_ASSERT_EQUAL(1, alcohol(&p, 'a', 0));
    TEST_ASSERT_EQUAL(2, alcohol(&p, 'b', 0));
    TEST_ASSERT_EQUAL(3, alcohol(&p, 'c', 0));
    TEST_ASSERT_EQUAL(4, alcohol(&p, 'd', 0));
    TEST_ASSERT_EQUAL(1, alcohol(&p, 'a', 0));
    TEST_ASSERT_EQUAL(2, alcohol(&p, 'b', 0));
    TEST_ASSERT_EQUAL(3, alcohol(&p, 'c', 0));
}

void test_accident (void)
{
    TEST_ASSERT_EQUAL(1, accident(&p, 'Y', 0));
    TEST_ASSERT_EQUAL(0, accident(&p, 'N', 0));
}

void test_exercise (void)
{
    char a[] = {"YOGA"};
    TEST_ASSERT_EQUAL(0, strcmp(exercise(&p, 'a', 0), a));
    char b[] = {"GYM"};
    TEST_ASSERT_EQUAL(0, strcmp(exercise(&p, 'b', 0), b));
    char c[] = {"JOGGING"};
    TEST_ASSERT_EQUAL(0, strcmp(exercise(&p, 'c', 0), c));
}

void test_diet (void)
{
    char a[] = {"HEALTHY"};
    TEST_ASSERT_EQUAL(0, strcmp(diet(&p, 'a', 0), a));
    char b[] = {"FAST FOOD"};
    TEST_ASSERT_EQUAL(0, strcmp(diet(&p, 'c', 0), b));
    char c[] = {"AVERAGE"};
    TEST_ASSERT_EQUAL(0, strcmp(diet(&p, 'b', 0), c));
}

void test_month (void)
{
    char a[] = {"SUNRISE"};
    TEST_ASSERT_EQUAL(0, month(&p, a, 35, 0));
    TEST_ASSERT_EQUAL(0, month(&p, a, 35, 0));
    char b[] = {"LIFE ELITE SECURE"};
    TEST_ASSERT_EQUAL(0, month(&p, b, 19, 0));
    TEST_ASSERT_EQUAL(0, month(&p, b, 70, 0));
    char c[] = {"PAAKA LIFE eSHIELD"};
    TEST_ASSERT_EQUAL(0, month(&p, c, 35, 0));
    TEST_ASSERT_EQUAL(0, month(&p, c, 35, 0));
    char d[] = {"BHARMA PLAN"};
    TEST_ASSERT_EQUAL(0, month(&p, d, 16, 0));
    TEST_ASSERT_EQUAL(0, month(&p, d, 71, 0));
    char e[] = {"RAVAN PLAN"};
    TEST_ASSERT_EQUAL(0, month(&p, e, 16, 0));
    TEST_ASSERT_EQUAL(0, month(&p, e, 54, 0));
}
void test_policy (void)
{
    char a[] = {"RAVAN PLAN"};
    TEST_ASSERT_EQUAL(0, strcmp(policy(&p, 1, 0), a));
    char b[] = {"LIFE ELITE SECURE"};
    TEST_ASSERT_EQUAL(1, strcmp(policy(&p, 3, 0), b));
    char c[] = {"PAAKA LIFE eSHIELD"};
    TEST_ASSERT_EQUAL(1, strcmp(policy(&p, 4, 0), c));
    char d[] = {"BHARMA PLAN"};
    TEST_ASSERT_EQUAL(1, strcmp(policy(&p, 7, 0), d));
    char e[] = {"BHARMA PLAN"};
    TEST_ASSERT_EQUAL(1, strcmp(policy(&p, 10, 0), e));
}

int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_alcohol);
    RUN_TEST(test_accident);
    RUN_TEST(test_exercise);
    RUN_TEST(test_diet);
    RUN_TEST(test_month);
    RUN_TEST(test_policy);

    return UNITY_END();
}
