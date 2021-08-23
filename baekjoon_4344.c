#include <stdio.h>

int main(void)
{
	int N,student;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%d",&student);
		int sum=0;
		int arr[student];
		for(int j=0;j<student;j++)
		{
			scanf("%d",&arr[j]);
			sum+=arr[j];
		}
		double avg=(double)sum/student;
		int count=0;
		for(int j=0;j<student;j++)
		{
			if(avg<arr[j])
				count++;
		}
		double ratio=(double)count/student*100;
		printf("%.03lf%%\n",ratio);
	}
}