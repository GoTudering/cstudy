#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	
	int a,b=0;
	a=N/5;
	if(N%5==1)
	{
		a--;
		b=2;
	}
	else if(N%5==2)
	{
		a-=2;
		b=4;
	}
	else if(N%5==3)
		b++;
	else if(N%5==4)
	{
		a--;
		b=3;
	}
	if(a<0||b<0)
		printf("%d",-1);
	else
		printf("%d",a+b);
	
}