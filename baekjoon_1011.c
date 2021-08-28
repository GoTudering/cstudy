#include <stdio.h>
#include <math.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		int x,y,count;
		double N,n;
		scanf("%d %d",&x,&y);
		N=y-x-2;
		if(N>=0)
		{
			double D=(-1+sqrt(9+4*N))/2;
			n=floor(D);
			if(D-n>=0.5)
				count=2*(n-1)+3;
			else if(D=n)
				count=2*(n-1)+3;
			else
				count=2*(n-1)+2;
			printf("%d\n",count);
		}
		else if(N=-1)
			printf("%d\n",1);
	}
}