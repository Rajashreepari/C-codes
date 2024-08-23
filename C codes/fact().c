#include<stdio.h>
int fact(int n)
{
 if (n==1)
    return 1;
 else
    return n*fact(n-1);
}
int main()
{
 int n,c;
 printf("enter the number:\n");
 scanf("%d",&n);
 c=fact(n);
 printf("%d",c);
}
