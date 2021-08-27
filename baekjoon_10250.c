#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	for(int i=0;i<T;i++)
	{
		int W,H,N,floor,th,num;
		scanf("%d %d %d",&H,&W,&N);
		th=N/H;
		floor=N%H;
		if(floor==0)
			floor=H;
		else
			th++;
		num=floor*100+th;
		printf("%d\n",num);
	}
}