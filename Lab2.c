#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// Part 1
	printf("PART 1\n");
	int N_1=3;
	double array[N_1][N_1];
	
	int i;
	int j;
	
	for (i = 0; i < N_1; i++)
	{
		for (j = 0; j < N_1; j++)
		{
			printf("Add number array:\n");
			scanf("%lf", &array[i][j]);
		}
	}
	
	double sum_main_diag = 0;
	double sum_secondary_diag = 0;
	
	printf("\n");
	for (i = 0; i < N_1; i++)
	{
		sum_main_diag += array[i][i]; 
		sum_secondary_diag += array[i][N_1 - 1 - i]; 
	}
	
	printf("Sum main diagonal:\n");
	printf("%lf", sum_main_diag);
	printf("\n");
	printf("Sum secondary diagonal:\n");
	printf("%lf", sum_secondary_diag);
	
	// Part 2
	printf("\n\n");
	printf("PART 2\n");
	int N_2 = 2;
	int array_2[N_2][N_2];
	
	for (i = 0; i < N_2; i++)
	{
		for (j = 0; j < N_2; j++)
		{
			printf("Add number array:\n");
			scanf("%d", &array_2[i][j]);
		}
	}
	
	int sum_array_2 = 0;
	
	for (i = 0; i < N_2; i++)
	{
		for (j = 0; j < N_2; j++)
		{
			sum_array_2 += array_2[i][j];
		}
	}
	
	printf("\n");
	printf("Sum array_2:\n");
	printf("%d", sum_array_2);
	printf("\n");
	
	int sum_array_2_x_2 = pow(sum_array_2,2);
	printf("\n");
	printf("Sum array_2 in pow 2:\n");
	printf("%d", sum_array_2_x_2);
	printf("\n");
	
	return 0;
}

