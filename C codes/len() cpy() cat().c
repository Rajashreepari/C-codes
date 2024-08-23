#include <stdio.h>
#include <string.h>
int main ()
{
 char str1[20] = "Hello";
 char str2[20] = "World";
 char str3[20];
 int len ;
 strcpy(str3, str1);
 printf("Copied String= %s\n", str3 );
 strcat( str1, str2);
 printf("Concatenated String is= %s\n", str1 );
 len = strlen(str1);
 printf("Length of string str1 is= %d\n", len );
 return 0;
}
