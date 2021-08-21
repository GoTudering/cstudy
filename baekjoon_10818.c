#include <stdio.h>

int main(void)
{
	int n,i,max=-1000001,min=1000001;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	printf("%d %d",min, max);
}