#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

double** allocate_matrix(int n) {
	// Выделить ДВУМЕРНЫЙ МАССИВ ЧЕРЕЗ ДВОЙНОЙ УКАЗАТЕЛЬ
	double *pointers_matrix = malloc(n * n * sizeof(double));
    //double **mat = malloc(n * n * sizeof(double));
	
	double **mat = (double**)malloc(n * sizeof(double*));
	
    if (mat == NULL || pointers_matrix == NULL) {
        printf("ERROR: Malloc IS NOT COMPLETE!\n");
        exit(-1);
    }
    
    for (int i = 0; i < n; i++)
    {
		mat[i] = pointers_matrix + i * n;
	}
	
    return mat;
}

void free_matrix(double **mat) {
    if (mat != NULL) {
        free(mat[0]);
        free(mat);
    }
}

void fill_matrix(double **mat, int n, const char *matrix_name) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Add element [%d][%d] for %s: ", i, j, matrix_name);
            scanf("%lf", &mat[i][j]);
        }
    }
}

void print_matrix(double **mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f\t", mat[i][j]);
        }
        printf("\n");
    }
}

double** add_matrices(double **a, double **b, int n) {
	double **res = allocate_matrix(n);
    for (int i = 0; i < n; i++) 
    {
		for (int j = 0; j < n; j++)
		{
			res[i][j] = a[i][j] + b[i][j];
		}
    }
    
    return res;
}

double** sub_matrices(double **a, double **b, int n) {
    double **res = allocate_matrix(n);
    for (int i = 0; i < n; i++) 
    {
		for (int j = 0; j < n; j++)
		{
			res[i][j] = a[i][j] - b[i][j];
		}
    }
    
    return res;
}

double** multiply_matrices(double **a, double **b, int n) {
	double **res = allocate_matrix(n);
	
	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; j < n; j++)
		{
			res[i][j] = 0;
			for (int k = 0; k < n; k++) 
			{
				res[i][j] += a[i][k] * b[k][j];
			}
		}
    }
    
    return res;
}
