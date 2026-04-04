#include <stdio.h>
#include <stdlib.h>
#include "Square.h"
#include "Perimetr.h"
#include "Output.h"

int main(int argc, char *argv[]) {
	double triangle_a;
	double triangle_b;
	double triangle_c;
	
	scanf("%lf", &triangle_a);
	scanf("%lf", &triangle_b);
	scanf("%lf", &triangle_c);
	
	Output(triangle_a,triangle_b,triangle_c);

	
	return 0;
}
	
