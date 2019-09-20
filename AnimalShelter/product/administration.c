#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "administration.h"

int addAnimal(ANIMAL* AnimalPtr, ANIMAL animalArray[], int *animals) {
	if(*animals < MAX_ANIMALS) {
		animalArray[*animals] = *AnimalPtr;
		(*animals)++;
		return 0;
	}
	return -1;
}

void showAnimals(ANIMAL animalArray[], int animals) {
	const char* SPECIES_STR[] = {"Cat", "Dog", "GuineaPig", "Parrot"};
	for(int i = 0; i < animals; i++) {
		printf("Name: %s Species: %s Age: %d", animalArray[i].Name, SPECIES_STR[animalArray[i].Species], animalArray[i].Age);
	}
}
