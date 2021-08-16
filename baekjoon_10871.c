#include <stdio.h>


int main(void)
{
	int N,X,i;
	scanf("%d %d",&N,&X);
	int arr[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		if(arr[i]<X)
			printf("%d ",arr[i]);
	}
	printf("\b");
}

/*
int main(void)
{
	int a,N,X,i;
	scanf("%d %d",&N,&X);
	for(i=0;i<N;i++)
	{
		scanf("%d",&a);
		if(a<X)
			printf("%d ",a);
	}
	printf("\b");
}
*/