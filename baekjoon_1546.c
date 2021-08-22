#include <stdio.h>

int main(void)
{
	int NUM;
	scanf("%d",&NUM);
	double arr[NUM];
	for(int i=0;i<NUM;i++)
	{
		scanf("%lf",&arr[i]);
	}
	
	double max=0;
	for(int i=0;i<NUM;i++)
	{
		if(arr[i]>max)
			max=arr[i];
	}
	
	double sum=0;
	for(int i=0;i<NUM;i++)
	{
		arr[i]=(arr[i]/max*100);
		sum+=arr[i];
	}
	printf("%.3lf",sum/NUM);
}