#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[100];
	scanf("%s",arr);
	for(int i=97;i<=122;i++)
	{
		int check=0;
		for(int j=0;j<strlen(arr);j++)
		{
			if(i==(int)arr[j])
			{
				printf("%d ",j);
				check=1;
				break;
			}
		}
		if(check==0)
			printf("%d ",-1);
	}
}