#include <stdio.h>
#include <string.h>

int main() {
   char str[100];
   int i, j, len, k;

   printf("Enter a sentence: ");
   fgets(str, 100, stdin);
   len = strlen(str);

   j = len - 2;
   for (i = len - 2; i >= 0; i--) {
      if (str[i] == ' ') {
         for (k = i + 1; k <= j; k++) {
            printf("%c", str[k]);
         }
         printf(" ");
         j = i - 1;
      }
   }
   for (i = 0; i <= j; i++) {
      printf("%c", str[i]);
   }

   return 0;
}
