#include <stdio.h>

int main() {
    int arr[100], n;
    int i;
    int *ptr = arr;
    int biggest, secondBiggest, smallest, secondSmallest;
    int *pBiggest, *pSecondBiggest, *pSmallest, *pSecondSmallest, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", ptr + i);
    }

    // Initialize smallest and biggest
    smallest = biggest = *(ptr);
    pSmallest = pBiggest = ptr;

    // First find smallest and biggest
    for(i = 1; i < n; i++) {
        if (*(ptr + i) < smallest) {
            smallest = *(ptr + i);
            pSmallest = ptr + i;
        }
        if (*(ptr + i) > biggest) {
            biggest = *(ptr + i);
            pBiggest = ptr + i;
        }
    }

    // Initialize second smallest and second biggest with some value
    secondSmallest = biggest;
    secondBiggest = smallest;
    pSecondSmallest = pBiggest;
    pSecondBiggest = pSmallest;

    // Find second smallest and second biggest
    for(i = 0; i < n; i++) {
        int val = *(ptr + i);

        if (val > smallest && val < secondSmallest) {
            secondSmallest = val;
            pSecondSmallest = ptr + i;
        }

        if (val < biggest && val > secondBiggest) {
            secondBiggest = val;
            pSecondBiggest = ptr + i;
        }
    }

    // Swap second biggest and second smallest using pointers
    temp = *pSecondBiggest;
    *pSecondBiggest = *pSecondSmallest;
    *pSecondSmallest = temp;

    // Print the array after swapping
    printf("\nArray after swapping second biggest and second smallest:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
