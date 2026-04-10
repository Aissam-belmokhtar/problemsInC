#include <stdio.h>
int factoriel(int N)
{
	if(N == 1 || N == 0)
		return 1;
	else
		return N * factoriel(N - 1);
}
int main()
{
	int N = 0;
	printf("%d",factoriel(N));
}
