#ifndef MATRIX_H
#define MATRIX_H

// Функции выделения и освобождения памяти
double** allocate_matrix(int n);
void free_matrix(double **mat);

// Функции ввода и вывода
void fill_matrix(double **mat, int n, const char *matrix_name);
void print_matrix(double **mat, int n);

// Математические операции
double** add_matrices(double **a, double **b, int n);
double** sub_matrices(double **a, double **b, int n);
double** multiply_matrices(double **a, double **b, int n);

#endif // MATRIX_H
