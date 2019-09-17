#include <string.h>
#include "unity.h"
#include "administration.h"

void setUp(void)
{
	ANIMAL animals[2];
	int animalCount = 0;
	
    ANIMAL a1;
    a1.Name = "testA1";
    a1.Species = "Parrot";
    a1.Age = 1;
    
    ANIMAL a2;
    a2.Name = "testA2";
    a2.Species = "Dog";
    a2.Age = 2;
}

void tearDown(void)
{
    // This is run after EACH test
}

//examples
/* void test_EmptyTestFail(void)
{
    TEST_ASSERT_EQUAL(1, 0);
}
void test_EmptyTestPass(void)
{
    TEST_ASSERT_EQUAL(1, 1);
}*/

/*void test_AddAnimalAndOverflow(void) {
	TEST_ASSERT_EQUAL(addAnimal(*a1, animals, &animalCount), 0);
	TEST_ASSERT_EQUAL(addAnimal(*a2, animals, &animalCount), 0);
	TEST_ASSERT_EQUAL(addAnimal(*a1, animals, &animalCount), -1);
}
*/
int main (void)
{
        
    UnityBegin();

    //RUN_TEST(test_EmptyTestFail,1);
	//RUN_TEST(test_EmptyTestPass,2);
	//RUN_TEST(test_AddAnimalAndOverflow, 1);

    return UnityEnd();
}
