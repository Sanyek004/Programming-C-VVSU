#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

double* allocate_matrix(int n) {
    double *mat = malloc(n * n * sizeof(double));
    if (mat == NULL) {
        printf("ERROR: Malloc IS NOT COMPLETE!\n");
        exit(-1);
    }
    return mat;
}

void free_matrix(double *mat) {
    if (mat != NULL) {
        free(mat);
    }
}

void fill_matrix(double *mat, int n, const char *matrix_name) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Add element [%d][%d] for %s: ", i, j, matrix_name);
            scanf("%lf", &mat[i * n + j]);
        }
    }
}

void print_matrix(double *mat, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f\t", mat[i * n + j]);
        }
        printf("\n");
    }
}

void add_matrices(double *a, double *b, double *res, int n) {
    for (int i = 0; i < n * n; i++) {
        res[i] = a[i] + b[i];
    }
}

void sub_matrices(double *a, double *b, double *res, int n) {
    for (int i = 0; i < n * n; i++) {
        res[i] = a[i] - b[i];
    }
}

void multiply_matrices(double *a, double *b, double *res, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i * n + j] = 0;
            for (int k = 0; k < n; k++) {
                res[i * n + j] += a[i * n + k] * b[k * n + j];
            }
        }
    }
}
