#include <stdio.h>
void is_palindrome(int N)
{
	int n,temp;
	temp = N;
	n = 0;
	while(temp != 0)

	{
		n = n * 10 + temp % 10;	
		temp /= 10;
	}	
	if(n == N)
		printf("The Number Is palindrome");
	else
		printf("The Number Not a palindrome");

}
int main(){
	int n;
	printf("put your number :  ");
	scanf("%d\n",&n);
	is_palindrome(n);
}
