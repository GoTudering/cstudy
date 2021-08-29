#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		unsigned int x,y;
		unsigned int seq[46345]={0};
		for(int i=0;i<46345;i++)
		{
			seq[i]=i*i+3*i+2;
		}
		int N,n,count;
		scanf("%d %d",&x,&y);
		N=y-x;
		for(int i=0;i<46345;i++)
		{
			if(seq[i]==N)
			{
				n=i+1;
				count=2*n;
				break;
			}
			else if(seq[i]<N&&seq[i+1]>N)
			{
				n=i+1;
				if(N<=seq[i]+n+1)
					count=2*n+1;
				else if(N>seq[i]+n+1)
					count=2*n+2;
				break;
			}
		}
		if(N==1)
			count=1;
		printf("%d\n",count);

	}
}