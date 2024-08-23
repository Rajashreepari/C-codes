#include<stdio.h>
int main()
{
 int a,b,c;
 scanf("%d %d",&a,&b);
 printf("given values:%d %d",a,b);
 c=a;
 a=b;
 b=c;
 printf("after swapping:%d %d",a,b);
 return 0;
}
