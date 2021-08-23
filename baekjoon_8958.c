#include <stdio.h>
#include <string.h>  //strlen를 쓰기 위해

int main(void)
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		int M, sum=0,count=0;
		char arr[80];
		scanf("%s",arr);
		M=strlen(arr);
		for(int j=0;j<M;j++)
		{
			if(arr[j]=='O')
				count++;
			else
				count=0;
			sum+=count;
		}
		printf("%d\n",sum);
	}
	
	
}