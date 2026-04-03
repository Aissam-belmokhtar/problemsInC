#include <stdio.h>
void is_palindrome(int N)
{
	int n,temp;
	temp = N;
	n = 0;
	while(temp != 0)

	{
		n *= 10;
		n += temp % 10;
		printf(" %d",n);
		
		temp = temp / 10;
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
