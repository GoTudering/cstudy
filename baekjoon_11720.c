#include <stdio.h>

int main(void)
{
	int N,sum=0;
	scanf("%d",&N);
	char arr[N];
	scanf("%s",arr);
	for(int i=0;i<N;i++)
	{
    	sum+=(int)arr[i]-48;
	}
	printf("%d",sum);
}