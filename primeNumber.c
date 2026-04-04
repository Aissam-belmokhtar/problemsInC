#include <stdio.h>
#include <math.h>
void primeNumber(int N)
{
	int temp,i,count;
	temp = ceil(sqrt(N));
	if(N == 1)
	{
		printf("%d is not a prime number \n",N);
		return ;
	}
	
	else if(N == 2 || N == 3)
		printf("%d is a Prime number \n",N);

	i = 2;
	count = 0;
	while(i <= temp)
	{
		if(N % i == 0)
			count = 1;
		i++;
	}
	if(count == 0)
		printf("%d  is prime number \n",N);
	else
		printf("%d is not prime number \n",N);
}

int main()
{
	primeNumber(5);
	primeNumber(13);
	primeNumber(100);
	primeNumber(112);
	return 0;
}
