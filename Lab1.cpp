#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	printf("Hello world!\n");
	
	double a;
	double b;
	double c;
	scanf("%lf %lf %lf", &a,&b,&c);
	// Задание 1
	// Формула дискрименанта / коэффициента квадратного уравнения: b^2 - 4ac
	char symb = ' ';
	while (symb != 'n')
	{
	
		double D = pow(b,2.0) - 4 * a * c;
		printf("%.1f", D);
		if (D < 0)
		{
			printf("No solution!");
		}
		else
		{
			printf("\n");
			double sqrt_1 = sqrt(D);
			printf("%.1f", sqrt_1);
			double x1 = (sqrt_1 - b) / (2 * a);
			double x2 = (sqrt_1 - 2 * sqrt_1 - b) / (2 * a);
			printf("\n");
			printf("%.1f", x1);
			printf("\n");
			printf("%.1f", x2);
			printf("\n");
		}
		
		printf("Continue?");
		scanf(" %c", &symb);
	}
	return 0;
}
