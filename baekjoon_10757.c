#include <stdio.h>
#include <string.h>

void reverse(char arr[])
{
	int len=strlen(arr);
	char a[len];
	for(int i=0;i<len;i++)
	{
		a[i]=arr[len-1-i];
	}
	for(int i=0;i<len;i++)
	{
		arr[i]=a[i];
	}
}

int main(void)
{
	char A[10002]={0},B[10002]={0},retn[10003]={0}; //왜 배열을 0으로 설정해야하지?
	int next=0,max;
	scanf("%s %s",A,B);
	reverse(A);
	reverse(B);
	max=(strlen(A)>strlen(B)) ? strlen(A):strlen(B);
	for(int i=0;i<max;i++)
	{
		int sum;
		sum=A[i]-'0'+B[i]-'0'+next;
		while(sum<0)
			sum+='0';
		if(sum>9)
			next=1;
		else
			next=0;
		retn[i]=sum%10+'0'	;
	}
	if(next==1)
		retn[max]='1';
	reverse(retn);
	printf("%s",retn);
}