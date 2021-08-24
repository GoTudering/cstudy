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


/*
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
*/

//속도가 밑이 훨씬 빠름

int main(void)
{
	int arr[10001],index;
	for(int i=1;i<10001;i++)
	{
		index=d(i);
		if(index<=10001)
			arr[index]=1;
		if(arr[i]!=1)
			printf("%d\n",i);
	}
}