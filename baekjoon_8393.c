#include <stdio.h>

int main(void)
{
	int a=0;
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		a+=i;
	}
	printf("%d",a);
}