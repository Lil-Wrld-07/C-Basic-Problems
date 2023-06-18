#include<stdio.h>
void main()
{
    int i,j,a=1,n;
    printf("Enter the number of digits to generate floyds :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
}