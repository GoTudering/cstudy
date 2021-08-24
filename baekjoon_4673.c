#include <stdio.h>

int d(int n)
{
	int para=n;
	while(n!=0)
	{
		para+=n%10;
		n=n/10;
	}
	return para;
}

int main(void)
{
	for(int i=1;i<=10000;i++)
	{
		int check=0;
		for(int j=1;j<i;j++)
		{
			if(i==d(j))
			{
				check=1;
				break;
			}
		}
		if(check==0)
			printf("%d\n",i);
	}
}