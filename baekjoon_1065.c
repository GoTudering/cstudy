#include <stdio.h>

int arseq(int N) //100보다 큰 N
{
	int a,b,c,check=1;
	while(N>=100)
	{
		a=N%10;
		N/=10;
		b=N%10;
		N/=10;
		c=N%10;
		if((a-b)!=(b-c))
		{
			check=0;
			break;
		}
		else
		{
			N=N*10+b;
		}
	}
	return check;
}

int main(void)
{
	int n,count=99;
	scanf("%d",&n);
	if(n>=100)
	{
		for(int i=100;i<=n;i++)
		{
			if(arseq(i)==1)
				count++;
		}
	}
	else{
		count=n;
	}
	
	printf("%d",count);
}