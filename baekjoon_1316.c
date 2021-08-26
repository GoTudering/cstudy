#include <stdio.h>

int equal(int i, char a[])
{
	if(a[i]==a[i+1])
	{
		i++;
		return equal(i,a);
	}
	else
		return i;
}

int main(void)
{
	int N,count=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		char arr[101]={'\0',}, check[26]={'\0',};
		int chk=1;
		scanf("%s",arr);
		for(int j=0;arr[j]!=*"\0";j++)
		{
			if(check[(int)arr[j]-97]!='O')
			{
				check[(int)arr[j]-97]='O';
			}
			else
			{
				chk=0;
				break;
			}
			j=equal(j,arr);
		}
		if(chk==1)
			count++;
		
	}
	printf("%d",count);
}
