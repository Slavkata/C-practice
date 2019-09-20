/*
 * Menu animal_shelter.c
 *
 *  
 */

#include <stdio.h>
#include <stdlib.h>
#include "animal.h"
#include "administration.h"

int main (void)
{
	printf ("PRC assignment 'Animal Shelter' (version april 2019)\n");
    ANIMAL animalArray[MAX_ANIMALS];
    int animals = 0;
    int choice = -1;
    while (choice != 0)
    {
        printf ("\nMENU\n====\n");
        printf ("1: Show Animals \n");
        printf ("2: Add Animal \n");
        printf ("3: Remove Animal \n");
        printf ("4: Find Animal by name \n");
        printf ("0: quit \n");
                
        scanf ("%d", &choice);
		
        switch (choice)
        {
            case 1: //Show Animals
                showAnimals(animalArray, animals);
                break;
            case 2: //Add Animal
				{
					ANIMAL a;
					int speciesNum;
					printf("Name:");
					scanf("%s", a.Name);
					printf("Cat => 0\nDog => 1\nGuineaPig => 2\nParrot => 3\nSpecies:");
					scanf("%d", &speciesNum);
					a.Species = speciesNum;
					printf("Age:");
					scanf("%d", &a.Age);
					addAnimal(&a, animalArray, &animals);				
					break;
				}
            case 3: //Remove Animal
                 printf ("remove Animal\n");
                 break;
            case 4://find by name
                printf ("find by name\n");
                 break;
            case 0:
                break;
            default:
                printf ("ERROR: invalid choice: %d\n", choice);
                break;
		}
	}
	
    return 0;
}
