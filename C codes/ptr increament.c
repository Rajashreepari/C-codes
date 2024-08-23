#include <stdio.h>
int main()
{
int a = 22;
int *p;
p=&a;
printf("p = %u\n", p);
p++;
printf("%d\n",p);
}
