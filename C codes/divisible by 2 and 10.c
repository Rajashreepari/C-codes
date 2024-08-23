#include <stdio.h>
int main()
{
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    if((a%2==0)&&(a%10==0))
    {
        printf("Number is divisible by 2 and 10");
    }
    else
    {
        printf("Number is not divisible by 2 and 10");
    }

    return 0;
}
