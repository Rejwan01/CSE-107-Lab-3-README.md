// A program to compute the sum of N consecutive numbers//

#include <stdio.h>
int main()
    {
    	int n, i,sum = 0;

    printf("Input Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
    	{
             sum = sum+i;
             
    printf("\n%d",sum);
    		
    }

    return 0;
}

