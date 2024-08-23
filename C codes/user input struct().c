#include<stdio.h>
struct student
{
    int roll_no;
    char name[20];
    float marks;

}s;
void main()
{
    printf("enter the values:");
    scanf("%d",&s.roll_no);
    scanf("%s",&s.name);
    scanf("%f",&s.marks);
    printf("%d %s %f",s.roll_no,s.name,s.marks);
}
