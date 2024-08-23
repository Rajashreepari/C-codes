#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    printf("GRADE");
    printf("\nSubject 1:");
    scanf("%d",&a);
    printf("\nSubject 2:");
    scanf("%d",&b);
    printf("\nSubject 3:");
    scanf("%d",&c);
    printf("\nSubject 4:");
    scanf("%d",&d);
    printf("\nSubject 5:");
    scanf("%d",&e);
    f=(a+b+c+d+e);
    g=f/5;
    if(g<=60)
        printf("The Grade Is D");
    else if(g<=70)
        printf("The Grade Is C");
    else if(g<=80)
        printf("The Grade Is B");
    else if(g<=90)
        printf("The Grade Is A");
    else
        printf("The Grade Is A+");
}
