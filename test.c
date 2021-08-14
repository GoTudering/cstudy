#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        printf("0");
        return 0;
    } else if (n == 1) {
        printf("1");
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d",fibonacci(a));
}