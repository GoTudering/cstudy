#include <stdio.h>
#include <math.h>

int main(void)
{
	double N,A;
	int a,b,c;
	scanf("%lf",&N);
	A=ceil((-3+sqrt(8*N+1))/2);
 	a=A;
 	a=(int)a;
 	b=a*(a+1)/2;
  	c=N-b;
  	if(a%2==0)
  	{
    	printf("%d/%d",a+2-c,c);
  	}
  	else if(a%2==1)
 	{
    	printf("%d/%d",c,a+2-c);
  	}
}
//math.h를 실행시키고 싶지만 이게 리눅스 기반이기에 안된다. 그러면 -lm옵션을 추가해줘야한다.
// 명령창에 gcc /workspace/cstudy/baekjoon_1193.c -lm -o ~~ 이런식으로 추가해주면 된다.