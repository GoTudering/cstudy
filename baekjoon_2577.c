#include <stdio.h>

int main(void)
{
	int a,b,c,d,total;
	int arr[10]={0,}; // 1차원 배열 값에 각각 0을 넣기
	scanf("%d %d %d",&a,&b,&c);
	total=a*b*c;
	while(total!=0)
	{
		d=total%10;
		arr[d]+=1;
		total/=10;
	}
	for(int i=0;i<10;i++)
	{
		printf("%d\n",arr[i]);
	}
}