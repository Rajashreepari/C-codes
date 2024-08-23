#include<stdio.h>
void main()
{
    printf("Rathinam Stores*");
    int a,a1,a2,a4,gst,t;
    printf("\nProduct:");
    scanf("%s",&a);
    printf("\nquantity:");
    scanf("%d",&a1);
    printf("\nprice:");
    scanf("%d",&a2);
    a4=a1*a2;
    printf("\nprice:");
    printf("%d",a4);
    gst=(a4%10);
    t=(gst+a4);
    printf("\nTotal price:");
    printf("%d",t);
    printf("\nGST price:");
    printf("%d",gst);
}
