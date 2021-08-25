#include <stdio.h>

int equal(int i, char *a)
{
	if(a[i]==a[i+1])
		i++;
	else
		return i;
}

int main(void)
{
	int N,count=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		char arr[100];
		scanf("%s",arr);
		char *p=arr;
		for(int j=0;arr[j]!=*"\0";j++)
		{
			equal(i,p);
			count++;
		}
	}
	printf("%d",count);
}