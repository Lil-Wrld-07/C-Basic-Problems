#include<stdio.h>
void main(){

 
 int  a[2][3]={1,2,3,4,5,6};
   printf("%u\n",&a);
   printf("%u\n",&a[0]);
   printf("%u\n",&a[0][0]);
   printf("%d\n",*&a);
   printf("%d\n",*&a[0]); 
   printf("%d\n",*&a[0][0]);
   int x=10;
   void *p;
   p=&x;
   int **q;
   q=&p;
   printf("%u\n",p);
   printf("%d\n",*(int*)p);
   printf("%u\n",q);
   printf("%u\n",*q);
   printf("%d\n",**q);
  
   

   

}