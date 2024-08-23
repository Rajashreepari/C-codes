#include <stdio.h>
int add(int a,int b)
{
 int sum;
 sum=a+b;
 return sum;
}
int sub(int a,int b)
{
 int sub;
 sub=a-b;
 return sub;
}
int mul(int a,int b)
{
 int product;
 product=a*b;
 return product;
}
int div(int a,int b)
{
 int quotient;
 quotient=a/b;
 return quotient;
}
int mod(int a,int b)
{
 int remainder;
 remainder=a%b;
 return remainder;
}
int sq(int a)
{
 int squ;
 squ=a*a;
 return squ;
}

int main()
{
int ch,a,b,c;
printf("choice: (1,2,3,4,5,6)");
scanf("%c",&ch);
if (ch=='1' ||ch=='2' ||ch=='3' ||ch=='4' ||ch=='5')
 {
  printf("enter numers:");
  scanf("%d %d",&a,&b);
  if (ch=='1')
   {
    c=add(a,b);
    printf("the sum is %d",c);
   }
  else if (ch=='2')
   {
    c=sub(a,b);
    printf("the difference is %d",c);
   }
  else if (ch=='3')
   {
    c=mul(a,b);
    printf("the product is %d",c);
   }
  else if (ch=='4')
   {
    c=div(a,b);
    printf("the quotient is %d",c);
   }
  else if (ch=='5')
   {
    c=mod(a,b);
    printf("the remainder is %d",c);
   }
 }
else
 {
  printf("enter number:");
  scanf("%d",&a);
  c=sq(a);
  printf("the squre root of %d is %d",a,c);
 }
return 0;
}
