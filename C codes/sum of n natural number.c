#include<stdio.h>
int main()
{
 int i,n,sum=0;
 printf("enter the number :");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
   {
   sum+=i;
   }
 printf("the sum of %d natural numbers is %d",n,sum);
 return 1;
}
