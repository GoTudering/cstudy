#include <stdio.h>
int convert(int n)
{
	int a,b,c;
	a=n%10;
	n/=10;
	b=n%10;
	c=n/10;
	n=a*100+b*10+c;
	return n;
}

int main(void)
{
	int a, b;
	scanf("%d %d",&a,&b);
	a=convert(a);
	b=convert(b);
	if(a<b)
		printf("%d",b);
	else if(a>b)
		printf("%d",a);
}