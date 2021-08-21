#include <stdio.h>

int main(void)
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF) //EOF는 End Of File로 아무 입력이 없음을 의미한다.
	{
		printf("%d\n",a+b);
	}
}