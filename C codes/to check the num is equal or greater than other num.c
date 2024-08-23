#include<stdio.h>
int main()
{
 int a,b;
 printf("enter two numbers:");
 scanf("%d %d",&a,&b);
 if(a>b)
  {
   printf("%d is greater",a);
  }
 else if(a<b)
  {
   printf("%d is greater",b);
  }
 else
  {
   printf("number1 is equal to number2");
  }
  return 1;
}
