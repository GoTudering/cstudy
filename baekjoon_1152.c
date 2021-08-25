#include <stdio.h>
#include <string.h>

int main(void)
{
	int count=0;
	char arr[1000000];
	scanf("%[^\n]s",arr);  //[^]은 해당 문자가 나오기 전까지 모든 문자열을 받겟다 \n은 엔터
	for(int i=1;i<strlen(arr);i++)
	{
		if((int)arr[i]==32)
		{
			count++;
		}
	}
	if(arr[strlen(arr)-1]!=32)
		count++;
	printf("%d",count);
}