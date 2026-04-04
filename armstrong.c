#include <stdio.h>
int main()
{
	int n,count,temp,tempN,index,N,j;
	printf(" Put Your Number : ");
	scanf("%d",&n);
	temp = n;
	count =  0;
	N = 0;
	while(temp != 0)	
	{
		temp /= 10;
		count++;
	}
	temp = 0;
	j = n;
	while(j != 0)
	{
		temp = j % 10;
		tempN = temp;
		index = 1;
		while(index <= count - 1)
		{
			tempN *= temp;
			index++;
		}
		N += tempN;
		j  /= 10;

	}
	printf("%d \n",N);
	if(N == n)
	{`
		printf(" The Number is Armstrong");
	}else
		printf("The Number isn't Armstrong");
}
