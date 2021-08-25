#include <stdio.h>
#include <string.h>

int main(void)
{
	char word[101];
	scanf("%s",word);
	int count=0;
	for(int i=0;i<strlen(word);i++)
	{
		if(word[i]==*"-"||word[i]==*"=")
			continue;
		else if(word[i]==*"d"&&word[i+1]==*"z"&&word[i+2]==*"="&&i+2<strlen(word))
		{
			count++;
			i+=2;
		}
		else if(word[i]==*"l"&&word[i+1]==*"j"&&i+1<strlen(word))
		{
			count++;
			i+=1;
		}
		else if(word[i]==*"n"&&word[i+1]==*"j"&&i+1<strlen(word))
		{
			count++;
			i+=1;
		}
		else
			count++;
	}
	printf("%d",count);
}
// word[i]는 pointer임