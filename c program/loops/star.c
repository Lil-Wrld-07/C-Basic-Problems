#include<stdio.h>
void stars(int n, int b );
void stars(int n, int b){
    int i,j;
    if(b==0)
    {
        for ( i = 0; i<n; i++)
        {
            for ( j = 0; j<=i; j++)
            {
                printf("*");
            }
            printf(" \n");
            
        }
        

    }
    else{
        if (b==1)
        {
          for ( i = 0; i<n; i++)
          {
            for (j = 0; j<=n-i-1;j++)
            {
                printf("*");
            
            }
            printf(" \n");
            
          }
            
        }
        else
            printf("valid operator\n");
        
        }
        
    
}
void main(){
    int a,d;
    printf("enter 0/1 for star printing\n");
    scanf("%d",&d);
    printf("enter number of lines\n");
    scanf("%d",&a);
     stars(a,d);

}
