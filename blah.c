#include <stdio.h>
#define h 1e-03


double diffN(double (* f)(double), int N, double x)
{
	if (N == 0)	
		return (* f)(x);
	else
	return (diffN(f, N - 1, x + h) - diffN(f, N - 1, x)) / h;	
}

double cube(double x)
{
	return x * x * x;
}

int main()
{
	double result  = diffN(&cube, 3, 1);
	printf("result is %lf\n", result);

	return 0;
} 

