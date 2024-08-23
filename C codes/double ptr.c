int main()
{
int a =10;
int *ptr=&a;
int **dptr=&ptr;
printf("%d\n",a);
printf("%d\n",&a);
printf("%d\n",ptr);
printf("%d\n",&ptr);
printf("%d\n",dptr);
printf("%d\n",*dptr);
printf("%d\n",&dptr);
printf("%d\n",*ptr);
printf("%d\n",**dptr);

}
