#include<stdio.h>
int max(int x ,int y ,int z);
void main(){

int a,b,c,biggest;
printf("enterthree nos:");
scanf("%d%d%d",&a,&b,&c);
biggest=max(a,b,c);
printf("biggest=%d",biggest);

}

int max(x,y,z){
int big;

if(y>x && y>z)
big=y;
else
{
if (z>y&&z>x)
{
  big=z;  /* code */
}
else
{
    big=x;
}
return big;



    
}
}
