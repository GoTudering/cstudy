#include <stdio.h>
int arr[41];
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return arr[n-1] + arr[n-2];
    }
}

/*
int main(void)
{
	int i;
	int size;
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&array[i]);
		if(array[i]==0)
			printf("1 0\n");
		else
			printf("%d %d\n",fibonacci(array[i]-1),fibonacci(array[i]));
	}
}
*/

int main(void)
{
	int i, index,number;
	for(i=0;i<=40;i++)
	{
		arr[i]=fibonacci(i);
	}
	scanf("%d",&number);
	for(i=0;i<number;i++)
	{
		scanf("%d",&index);
		if(index==0)
			printf("1 0\n");
		else
			printf("%d %d\n",arr[index-1], arr[index]);
	}
}