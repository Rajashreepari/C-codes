#include<stdio.h>
int main()
{
int a=20,*p=&a;
printf("%d\n",a);
printf("%u\n",p);
printf("%d\n",*p=56);
p++;
p--;
printf ("%u\n",p+1);
printf("%u\n",p-4);
}
