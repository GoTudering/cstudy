#include <stdio.h>

int main(void)
{
	int time=0;
	int arr[26]={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	char word[15];
	scanf("%s",word);
	for(int i=0;word[i]!='\0';i++)
	{
		time+=arr[word[i]-'A'];
	}
	printf("%d",time);
}