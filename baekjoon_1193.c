#include <stdio.h>
#include <math.h>

int main(void)
{
	double N,A;
	int a,b,c;
	scanf("%lf",&N);
	A=ceil((-3+sqrt(8*N+1))/2);
 	a=A;
 	a=(int)a;
 	b=a*(a+1)/2;
  	c=N-b;
  	if(a%2==0)
  	{
    	printf("%d/%d",a+2-c,c);
  	}
  	else if(a%2==1)
 	{
    	printf("%d/%d",c,a+2-c);
  	}
}