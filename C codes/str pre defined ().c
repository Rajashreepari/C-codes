#include<stdio.h>
#include<string.h>
int main()
{
char name[30],copy[30];
printf("Enter the name:");
scanf("%s",&name);
printf("String length:%d\n",strlen(name));
printf("String copy:%s\n",strcpy(copy,name));
printf("String reverse:%s\n",strrev(copy));
printf("String compare:%d\n",strcmp(name,copy));
printf("String concatenate:%s\n",strcat(name,copy));
printf("String upper:%s\n",strupr(name));
printf("String lower:%s\n",strlwr(copy));
return 0;
}
