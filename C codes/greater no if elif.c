#include<stdio.h>
int main()
{
   int a,b;
   printf("enter two  integers:");
   scanf("%d %d",&a,&b);
   if(a==b)
   {
      printf("result:%d=%d",a,b);
   }
   else if(a>b)
   {
      printf("result:%d>%d",a,b);
   }
   else
   {
      printf("result:%d<%d",a,b);

   }
}
