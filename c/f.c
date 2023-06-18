  #include<stdio.h>
void main()
{
  int i,n, fact=1,sum=0;
  printf("Enter the number to generate table\n");
  scanf("%d",&n);
  printf("Table of %d \n",n);
  for ( i = 1; i<=10 ; i++)
  {
    printf("%d\n",n*i);
  }
  for (i = 1; i<=n; i++)
  {
    fact=fact*i;
  }
  printf("Factorial of %d \n",n);
  printf("%d\n",fact);

  for ( i = 1; i<=n; i++)
  {
   sum=sum+i;
  }
  printf("Sum of series upto n=%d \n",n);
  printf("%d\n",sum);
  


  
  }
