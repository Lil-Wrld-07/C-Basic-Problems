#include<stdio.h>
long long int bin(int n)
{
    if (n==0) 
    {
    return n;
    }
    else{
  return n%10+2*(n/10);
    }
}
void main()
{
long long int  b,c;
printf("enter the no :");
scanf("%d",&b);
c=bin(b);
printf("%lld",c);

}