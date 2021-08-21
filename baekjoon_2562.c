#include <stdio.h>

int main(void)
{
	int count, max=0;
	int arr[9];
	for(int i=0;i<9;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]>max)
		{
			max=arr[i];
			count=i+1;
		}
	}
	printf("%d\n",max);
	printf("%d",count);
}