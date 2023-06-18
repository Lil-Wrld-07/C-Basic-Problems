#include<stdio.h>
long long bin(int n){
      int p;

    if(n==0){

        return n;
    }
    else{
        return n%2+10*bin(n/2); 
        

    }
     

      
        
    }

void main()
{
    long long b,c;
printf("enter no");
scanf("%d",&b);
c=bin(b);
printf("%lld",c);




}