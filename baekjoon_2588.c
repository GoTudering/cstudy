#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	scanf("%d\n%d",&a, &b);
	d=a*b;
	c=b%10;
	b-=c;
	b/=10;
	printf("%d\n",a*c);
	c=b%10;
	b-=c;
	b/=10;
	printf("%d\n",a*c);
	c=b%10;
	b-=c;
	b/=10;
	printf("%d\n",a*c);
	printf("%d",d);
}