#include<stdio.h>
void main()
{ 
    int i,j,a,n;
    printf("Enterthe number of rows :");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if (i%2!=0) a = 1;
            else a = 0;
        for ( j =1; j <=i; j++)
        {
            
          printf("%d ",a);
          if(a==0) a = 1;
          else a = 0;
        }
        printf("\n");
    }
    
}