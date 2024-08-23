#include<stdio.h>
int main()
{
 int a,b,c,d;
 scanf("%d %d %d",&a,&b,&c);
 printf("given values:%d\n %d\n %d\n",a,b,c);
 d=a;
 a=b;
 b=c;
 c=d;
 printf("after swapping:%d\n %d\n %d\n",a,b,c);
 return 0;
}
