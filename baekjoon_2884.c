#include <stdio.h>
#define MINUTE 60
#define HOUR 24

int main(void)
{
	int hour, minute;
	int timegap;
	scanf("%d %d",&hour, &minute);
	timegap=minute-45;
	if(timegap>=0)
		printf("%d %d",hour,timegap);
	else if(hour>0&&timegap<0)
		printf("%d %d",hour-1,MINUTE+timegap);
	else
		printf("%d %d",HOUR-1,MINUTE+timegap);
}