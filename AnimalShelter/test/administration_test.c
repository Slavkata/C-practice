#include <string.h>
#include "unity.h"
#include "administration.h"
#include <stdlib.h>

ANIMAL a1;
ANIMAL a2;
ANIMAL a3;
ANIMAL animals[2];
int animalCount = 0;

void setUp(void)
{
    strcpy(a1.Name, "testA1");
    a1.Species = 1;
    a1.Age = 1;
    
    
    strcpy(a2.Name, "testA2");
    a2.Species = 1;
    a2.Age = 2;
}

void tearDown(void)
{
    // This is run after EACH test
}

void test_AddAnimal(void) {
	TEST_ASSERT_EQUAL(addAnimal(&a1, animals, &animalCount), 0);
	TEST_ASSERT_EQUAL(addAnimal(&a2, animals, &animalCount), 0);
}

void test_AddAnimalOverflow(void) {
	int i = 0;
	for(; i < MAX_ANIMALS - 2; i++) {
		addAnimal(&a3, animals, &animalCount);
	}
	TEST_ASSERT_EQUAL(addAnimal(&a3, animals, &animalCount), -1);
}

int main (void)
{
        
    UnityBegin();

    //RUN_TEST(test_EmptyTestFail,1);
	//RUN_TEST(test_EmptyTestPass,2);
	RUN_TEST(test_AddAnimal, 1);
	RUN_TEST(test_AddAnimalOverflow, 2);

    return UnityEnd();
}
