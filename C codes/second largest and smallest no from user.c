#include <stdio.h>

int main() {
   int arr[100], n, i, max1 , max2 , min1, min2 ;

   printf("Enter the size of the array: ");
   scanf("%d", &n);

   printf("Enter the array elements: ");
   for (i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
   }

   for (i = 0; i < n; i++) {
      if (arr[i] > max1) {
         max2 = max1;
         max1 = arr[i];
      }
      else if (arr[i] > max2 && arr[i] != max1) {
         max2 = arr[i];
      }

      if (arr[i] < min1) {
         min2 = min1;
         min1 = arr[i];
      }
      else if (arr[i] < min2 && arr[i] != min1) {
         min2 = arr[i];
      }
   }

   printf("Second largest number: %d\n", max2);
   printf("Second smallest number: %d\n", min2);

   return 0;
}
