#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

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