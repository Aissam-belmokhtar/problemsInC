#include <stdio.h>
int addTwoNumbers(int a,int b)
{
	int sum,cunt;

	while(b != 0)
	{
		sum = a ^ b;
		cunt = (a & b);
		a = sum;
		b = cunt;
	}
	return a;

}

int main()
{
	int a = addTwoNumbers(5,17);
	int b = addTwoNumbers(0,10);
	int d = addTwoNumbers(10,0);
	printf("%d -> %d -> %d",a,b,d);
	

}
