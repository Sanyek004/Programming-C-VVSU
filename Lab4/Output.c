#include "Output.h"
#include "Square.h"
#include "Perimetr.h"
#include <stdio.h>

void Output(double a, double b, double c)
{
	if (a +  b > c && a + c > b && b + c > a)
	{
		double P = Perimetr(a,b,c);
		double S = Square(a,b,c);
		
		printf("P = %lf", P);
		printf("\n");
		printf("S = %lf", S);	
	}
	else
	{
		printf("This triangle doesn't exist!");		
	}
}
