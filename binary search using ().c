#include <stdio.h>
int binarySearch(int arr[], int low, int high, int key)
{
  if (low > high)
  {
    return -1; // Element not found
  }

 int mid = low + (high - low) / 2;
 if (arr[mid] == key)
  {
    return mid; // Element found at mid index
  }
 else if (arr[mid] < key)
  {
    return binarySearch(arr, mid + 1, high, key); // Search in right half
  }
 else
  {
    return binarySearch(arr, low, mid - 1, key); // Search in left half
  }
}

int main(void)
{
  int arr[] = {2, 3, 4, 10, 40};
  int n = sizeof(arr) / sizeof(arr[0]);
  int key = 10;

  int result = binarySearch(arr, 0, n - 1, key);

  if (result == -1)
   {
    printf("Element not present in array\n");
   }
  else
   {
    printf("Element found at index %d\n", result);
   }
  return 0;
}
