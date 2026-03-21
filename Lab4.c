#include <stdio.h>
#include <stdlib.h>
#include "Square.h"
#include "Perimetr.h"

int main(int argc, char *argv[]) {
	double triangle_a;
	double triangle_b;
	double triangle_c;
	
	scanf("%lf", &triangle_a);
	scanf("%lf", &triangle_b);
	scanf("%lf", &triangle_c);
	
	if (triangle_a + triangle_b > triangle_c && triangle_a + triangle_c > triangle_b && triangle_b + triangle_c > triangle_a)
	{
		double P = Perimetr(triangle_a,triangle_b,triangle_c);
		double S = Square(triangle_a,triangle_b,triangle_c);
		
		printf("P = %lf", P);
		printf("\n");
		printf("S = %lf", S);	
	}
	else
	{
		printf("This triangle doesn't exist!");		
	}

	
	return 0;
}
