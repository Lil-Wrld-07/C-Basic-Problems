#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the number of lines n : ");
    scanf("%d",&n);
    if (n%2!=0)
    {
        for ( i = 1; i <= n; i++)
        {
           // printf("*");
            
            
                for ( j = 1; j <= n; j++)
                {
                    if((n+1)/2==i || (n+1)/2==j)
                    printf("*");
                    else
                 printf(" ");
                  
               }
               printf("\n");
        
        }
    
    }
}