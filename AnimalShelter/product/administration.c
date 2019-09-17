#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "administration.h"

int addAnimal(ANIMAL* AnimalPtr, ANIMAL animalArray[], int *animals) {
	if(*animals < MAX_ANIMALS) {
		animalArray[*animals] = *AnimalPtr;
		*animals = *animals + 1;
		return 0;
	}
	return -1;
}

void showAnimals(ANIMAL animalArray[], int *animals) {
	for(int i = 0; i < *animals; i++) {
		printf("Name: %s", animalArray[i].Name);
	}
}
