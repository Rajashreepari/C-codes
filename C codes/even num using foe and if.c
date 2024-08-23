#include<stdio.h>
void main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+1)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }


}
