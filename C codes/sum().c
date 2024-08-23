#include<stdio.h>
void sum();
int main()
{
sum();
sum();
}
void sum()
{
int a,b,c;
printf("\n enter the element:");
scanf("%d %d",&a,&b);
c=a+b;
printf("%d",c);
}
