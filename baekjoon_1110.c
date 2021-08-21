#include <stdio.h>

int main(void)
{
	int a,b,c,d,count;
	count=1;
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	d=c*10+(b+c)%10;
	while(a!=d)
	{
		b=c;
		c=d%10;
		d=c*10+(b+c)%10;
		count+=1;
	}
	printf("%d",count);
}