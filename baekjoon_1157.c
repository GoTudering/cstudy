#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[1000001];
	scanf("%s",arr);
	int max=0;
	char save;
	for(int i=65;i<=90;i++)
	{
		int count=0;
		for(int j=0;j<strlen(arr);j++)
		{
			if(i==(int)arr[j]||i==((int)arr[j]-32))
			{
				count++;
			}

		}
		if(max==count&&max!=0)
		{
			save='?';
		}
		else if(max<count)
		{
			max=count;
			save=i;
		}
		
		
	}
	printf("%c",save);
}