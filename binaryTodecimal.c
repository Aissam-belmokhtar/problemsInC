#include<stdio.h>
int main()
{
	int binary;
	printf("saisir the binary value : ");
	scanf("%d",&binary);
	int decimal,i,temp,j;
	decimal = 0;
	weight = 1;
	temp = binary;
	i = 0;
	while( binary != 0)
	{
		temp = binary % 10;
		j = i; 
		while(j != 0)
		{
			temp *= 2;
			j--;
		}
		i++;
		decimal += temp;
		binary /= 10;
	}
	printf("%d",decimal);
}
