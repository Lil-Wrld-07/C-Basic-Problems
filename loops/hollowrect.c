#include<stdio.h>
void main()
{
    int i , j,m,n;
   printf("enter the values of of Rows and column : ");
    scanf("%d%d",&n,&m);
    
     if (m && n <100)
  { 
   for ( i = 1; i <= n; i++)
    {
        
        for (j = 1; j<= m; j++)
        {
            if (i==1|| i==n || j==1 || j==m )
            printf("*");
            else
            printf(" ");
            
                
            
            
            
            
        }
        printf("\n");
        
    
    
        
    }
   }
   else 
   printf(" OPPS ! \n PLEASE ENTER VALUE OF ROW AND COLUMN LESS THAN 100 OF ROWS AND COLUMN\n ");
   
    
}