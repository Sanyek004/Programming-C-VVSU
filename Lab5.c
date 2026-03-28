#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	printf("Task 5\n");
	int N=2;
	
	double *arr_1 = malloc(N * N * sizeof(double));
	double *arr_2 = malloc(N * N * sizeof(double));
	
	
	if (arr_1 == NULL)
	{
		printf("Memory is not located!!!");
		return -1;
	}
	
	if (arr_2 == NULL)
	{
		printf("Memory is not located!!!");
		return -1;
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("Add number array_1:\n");
			scanf("%lf", &arr_1[i * N + j]);
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("Add number array_2:\n");
			scanf("%lf", &arr_2[i * N + j]);
		}
	}
	
	char input = ' ';
	double *arr_res = malloc(N * N * sizeof(double));
	
	
	do
	{
		printf("Add operation such as +,-,*\n");
		scanf(" %c", &input);
		if (input == '+')
		{
			printf("Operation '+'\n");
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					arr_res[i * N + j] = arr_1[i * N + j] + arr_2[i * N + j];
					
					printf("%f\t", arr_res[i * N + j]);					
				}
			}
		}

	} while(input != '+' && input != '-' && input != '*');
	
	free(arr_1);
	free(arr_2);
	free(arr_res);
	
	return 0;
}

