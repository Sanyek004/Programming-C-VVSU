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
	//char s;
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
	
	
	printf("Array 1\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d: ", i);
		printf("Name: %s\n\n", array_1[i].name);
		printf("Surname: %s\n\n", array_1[i].surname);
		printf("Year born: %d\n\n", array_1[i].year);
	}
	
	printf("\n");
	
	printf("Add personal data:");
	printf(" ARRAY_2\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d) ",i);
		scanf(" %s",array_2[i].name);
		scanf(" %s",array_2[i].surname);
		scanf("%i",&array_2[i].year);
	}
	
	printf("Array 2\n");
	for (int i = 0; i < N; i++)
	{
		printf("%d: ", i);
		printf("Name: %s\n\n", array_2[i].name);
		printf("Surname: %s\n\n", array_2[i].surname);
		printf("Year born: %d\n\n", array_2[i].year);
	}
	
	
	return 0;
}
