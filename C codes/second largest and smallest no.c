#include <stdio.h>
void findSecondLargestAndSmallest(int arr[], int size)
 {
    int firstLargest, secondLargest, firstSmallest, secondSmallest;

    // Initialize first and second largest elements
    if (arr[0] > arr[1]) {
        firstLargest = arr[0];
        secondLargest = arr[1];
    } else {
        firstLargest = arr[1];
        secondLargest = arr[0];
    }

    // Initialize first and second smallest elements
    if (arr[0] < arr[1]) {
        firstSmallest = arr[0];
        secondSmallest = arr[1];
    } else {
        firstSmallest = arr[1];
        secondSmallest = arr[0];
    }

    // Traverse the array to find second largest and second smallest elements
    for (int i = 2; i < size; i++) {
        if (arr[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != firstLargest) {
            secondLargest = arr[i];
        }

        if (arr[i] < firstSmallest) {
            secondSmallest = firstSmallest;
            firstSmallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != firstSmallest) {
            secondSmallest = arr[i];
        }
    }

    printf("Second largest element is %d\n", secondLargest);
    printf("Second smallest element is %d\n", secondSmallest);
}

int main()
 {
    int arr[] = {5, 2, 8, 3, 1, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargestAndSmallest(arr, size);

    return 0;
}
