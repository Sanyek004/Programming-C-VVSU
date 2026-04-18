#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct human {
	char name[256];
	char surname[256];
	int year;
} HUMAN;

int main()
{
	int N = 4;
	
	HUMAN array_1[N];
	HUMAN array_2[N];
	
	printf("Add personal data:");
	printf(" ARRAY_1\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d) ",i);
		scanf(" %s",array_1[i].name);
		scanf(" %s",array_1[i].surname);
		scanf("%i",&array_1[i].year);
	}
	
	printf("\n");
	
	// Копирование из первого массива во второй 
	for (int i = 0; i < N; i++)
	{
		array_2[i] = array_1[i]; 
	}
	
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1 - i; j++)
		{
			if (array_2[j].year > array_2[j+1].year)
			{
				HUMAN temp = array_2[j];
				array_2[j] = array_2[j+1];
				array_2[j+1] = temp;
			}
		}
	}
	
	printf("Original Array 1\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d: ", i);
		printf("Name: %s\n\n", array_1[i].name);
		printf("Surname: %s\n\n", array_1[i].surname);
		printf("Year born: %d\n\n", array_1[i].year);
	}
	
	printf("\n\n");
	
	printf("Sorted Array 2\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d: ", i);
		printf("Name: %s\n\n", array_2[i].name);
		printf("Surname: %s\n\n", array_2[i].surname);
		printf("Year born: %d\n\n", array_2[i].year);
	}
	
	return 0;
}
