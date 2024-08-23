#include<stdio.h>
int main()
{
int *r , k=10;
r= &k;
printf("%u\n", &r);
printf("%u\n", r);
printf("%u\n", &k);
printf("%u\n", k);
printf("%d\n", *r);
}
