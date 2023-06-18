#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
char c;
printf("enter operatoors +,_*,/,:\n");
scanf("%c",&c);  
printf("Enter the two nos : \n");
scanf("%d%d",&a,&b);

switch (c)
{
case '+' : printf("%d+%d=%d\n",a,b,a+b);
   break; 
case '-' : printf("%d-%d=%d\n",a,b,a-b);
   break;
    case '*': printf("%d*%d=%d\n",a,b,a*b);
    break; 
case '/': printf("%d/%d=%d\n",a,b,a/b);
    break;
    

default: printf("Please enter valid operators for operation\n");
    break;
}

}
 