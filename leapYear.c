#include <stdio.h>
int main()
{
	int year;
	printf("print your year : \n");
	scanf("%d ",&year);
	if(year % 400 == 0)
		printf("%d is a leap year");
	
	else if( year % 100 == 0)
		printf("%d is not a leap year");
	else if(year % 4 == 0)
		printf("%d is elap year");
	else
		printf("%d is not a leap year");
}
