#include <stdio.h>

int main(void)
{
	int time=0;
	int arr[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	char word[16]; //문자열을 저장하기 위해서는 문자열 길이보다 1이더큰 배열이 필요합니다 이유는 abc\n 이렇게 저장되서 그렇습니다.
	scanf("%s",word);
	for(int i=0;word[i]!='\0';i++)
	{
		time+=arr[word[i]-'A'];
	}
	printf("%d",time);
}