#include<stdio.h>
int sum(int a,int b);
int main()
{
    sum(10,5);
}
int sum(int a,int b)
{
    printf("%d",a+b);
    return a+b;
}
