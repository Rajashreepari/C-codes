#include<stdio.h>
struct student
{
int rollno;
char name[60];
float mark;
};
void main()
{

  struct student s={1,"rekha",90};
  printf("%d %s %f",s.rollno,s.name,s.mark);
}
