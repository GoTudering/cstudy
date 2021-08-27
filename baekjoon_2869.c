#include <stdio.h>

int main(void)
{
	int A,B,V;
	scanf("%d %d %d",&A,&B,&V);
	if((V-A)%(A-B)==0)
		printf("%d",1+(V-A)/(A-B));
	else if((V-A)%(A-B)!=0)
		printf("%d",2+(V-A)/(A-B));
}