#include <stdio.h>

long long sum(int *a,int n)
{
	long long sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
	}
	return sum;
}

int main(void)
{
	int arr[17]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
	int *p=arr;
	printf("%lld",sum(p,17));
}