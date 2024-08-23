#include<stdio.h>
int area(int a,int b)
{
int area;
area=a*b;
return area;
}
int main()
{
int a,b,c;
printf("To calculate area of rectangle\n");
printf("enter length of rectangle:\n");
scanf("%d",&a);
printf("enter breadth of rectangle:\n");
scanf("%d",&b);
c=area(a,b);
printf("the area of rectangle is %d",c);
return 0;
}
