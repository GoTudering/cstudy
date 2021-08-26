#include <stdio.h>

int main(void)
{
	unsigned long A,B,C, cost, income,num;
	scanf("%ld %ld %ld",&A,&B,&C);
	if(B>=C)
		printf("%d",-1);
	else if(B<C)
	{
		num=A/(C-B);
		num++;
		printf("%ld",num);
	}
}