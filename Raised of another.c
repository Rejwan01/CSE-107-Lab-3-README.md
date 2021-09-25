/ A program to find the value of one number raised of another//


#include <stdio.h>

int main()

     { int i,x,n,multi = 1;
     	
     	printf("Input the value of x and n:   " );
     	
     	scanf("%d %d",&x,&n);
     	
     	for(i=1;i<=n;i++)
     	{
     		multi = multi*x;
     		
     	}
     	printf("\n%d",multi);
     	
     	return 0;
     	
     	}
     	
