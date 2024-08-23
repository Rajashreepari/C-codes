#include <stdio.h>
int main()
{
    int a=30,*pt=&a;
    *pt=40;
    printf("%d",a);
    return 0;
}
