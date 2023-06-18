#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter any odd number :");
    scanf("%d",&n);
    if (n%2==0)
    {
        printf(" \n For even number pattern would get change ! try with odd number for perfect result \n");
    }
    
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
             if (j==i || j==n-i+1 )
             {
                printf("*");
             }
             else 
             printf(" ");
        }
        printf("  \n");
    }
    
}