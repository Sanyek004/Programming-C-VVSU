#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matrix.h"

int main(int argc, char *argv[]) {
	
	printf("Task 5\n");
	int N = 2;
	
	// Выделение памяти через нашу функцию
    double *arr_1 = allocate_matrix(N);
    double *arr_2 = allocate_matrix(N);
    double *arr_res = allocate_matrix(N);
    
    // Заполнение матриц
    fill_matrix(arr_1, N, "array_1");
    fill_matrix(arr_2, N, "array_2");
		
	char input = ' ';
	int keep_running = 1;
	
	while(keep_running)
	{
		printf("Add operation such as +,-,*\n");
		scanf(" %c", &input);
		if (input == '+')
		{
			add_matrices(arr_1, arr_2, arr_res, N);
            print_matrix(arr_res, N);
		}
		else if (input == '-')
		{
			sub_matrices(arr_1, arr_2, arr_res, N);
            print_matrix(arr_res, N);
		}
		else if (input == '*')
		{
			multiply_matrices(arr_1, arr_2, arr_res, N);
            print_matrix(arr_res, N);
		}
		else
		{
			printf("This is symbol not supported! Exiting...\n");
			keep_running = 0;
		}

	} 
	
	// Очистка памяти
    free_matrix(arr_1);
    free_matrix(arr_2);
    free_matrix(arr_res);
	
	return 0;
}

