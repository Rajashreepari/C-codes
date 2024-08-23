#include<stdio.h>
int main()
{
int a=30;
int*ptr;//declaration
ptr=&a;
printf("%d\n",a);
printf("%d\n",ptr);
printf("%d\n",*ptr);
return 0;
}
