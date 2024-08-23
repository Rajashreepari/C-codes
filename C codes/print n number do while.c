#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter any number:");
    scanf("%d",&n);
    printf("Natural number from 1 to %d are:\n",n);
    do{
        printf("%d\n",i);
        i++;
    }
    while(i<=n);
    return 0;
}
