#include <stdio.h>
#include <string.h>

int main(void)
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		int R;
		scanf("%d",&R);
		char arr[20];
		scanf("%s",arr);
		for(int j=0;j<strlen(arr);j++)
		{
			for(int h=0;h<R;h++)
				printf("%c",arr[j]);
		}
		printf("\n");
	}
}