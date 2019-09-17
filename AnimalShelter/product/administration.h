#ifndef _ADMINISTRATION_H
#define _ADMINISTRATION_H

#include "animal.h"
#define MAX_ANIMALS 25

int addAnimal(ANIMAL* AnimalPtr, ANIMAL animalArray[], int *animals);

void showAnimals(ANIMAL animalArray[], int *animals);

#endif
