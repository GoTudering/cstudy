#include <stdio.h>

int main(void)
{
	int number, i;
	scanf("%d",&number);
	for(i=1;i<10;i++)
	{
		printf("%d %c %d = %d\n",number, '*', i, number*i);
	}
}