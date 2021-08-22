#include <stdio.h>

int main(void)
{
	int count=0;
	int arr[10];
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
		arr[i]%=42;
	}
	for(int i=0;i<10;i++)
	{
		int num=0;
		for(int j=0;j<i;j++)
		{
			if(arr[j]==arr[i])
			{
				num+=1;
			}
		}
		if(num==0)
			count+=1;
	}
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("%d",count);
}