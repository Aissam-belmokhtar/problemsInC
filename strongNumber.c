#include <stdio.h>
int factoriel(int n)
{
	int N;
	if( n == 0 || n == 1)
		return 1;
	N = n - 1;
	while(N != 0)
	{
		n *= N;
		N--;
	}
	return n;
}
void is_strong(int N)
{
	int len,temp,result,R;
	len = 0;
	temp = N;
	result = 0;
	R = N;
	while(temp != 0)
	{
		temp  /= 10;
		len++;
	}
	while(len != 0)
	{
		temp = N % 10;
		result += factoriel(temp);
		N  /= 10;
		len--;
	}
	if(result == R)
		printf("%d is a Strong Number",R);
	else
		printf("%d is Not A strong Number",R);
}
int main()
{
	int N = 145;
	is_strong(N);
	return 0;
}
