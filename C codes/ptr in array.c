#include<stdio.h>
int main()
{
int arr[]={11,12,13,1,15};
int*p;
p=arr;
int n=5;
for (int i=0;i<n;i++)
{ printf("%d\n",*p);
  printf("%d\n",p);
  p++;
}
}
