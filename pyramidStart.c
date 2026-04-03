#include <stdio.h>
int main()
{
	int nbr_rows,r_index,c_index;
	printf("how many you want in your pyramid \n");
	scanf("%d",&nbr_rows);
	
	r_index = 0 ;
	while(r_index < nbr_rows)
	{
		c_index = 1;
		while(c_index < (nbr_rows * 2))
		{
			if(c_index < (nbr_rows - r_index) || 
					(c_index > nbr_rows + r_index))						
			{				
				printf(" ");
			}
			else
				printf("*");
			c_index ++;
		}
		printf("\n");
		r_index ++;
	}
	return 0;
}
