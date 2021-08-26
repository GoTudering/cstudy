#include <stdio.h>
#include <math.h>

int main(void)
{
	double N,a;
	scanf("%lf",&N);
	a=ceil((-3+sqrt(12*N-3))/6);
	printf("%.0lf",++a);
}