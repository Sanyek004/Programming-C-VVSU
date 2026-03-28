#include "Square.h"
#include "Perimetr.h"
#include <math.h>

double Square(double a, double b, double c)
{
	double polyperimetr = Perimetr(a, b, c) / 2;
    double geron = sqrt(polyperimetr * (polyperimetr - a) * (polyperimetr - b) * (polyperimetr - c));
    return geron;
}
