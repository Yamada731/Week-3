#include <stdio.h>

int main() {
    int arr[100], n;
    int i, j, k;

    // Input array size
    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Removing duplicates
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; ) {
            if(arr[i] == arr[j]) {
                // Shift elements left to delete arr[j]
                for(k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Reduce size after deletion
            } else {
                j++;
            }
        }
    }

    // Print the array after removing duplicates
    printf("Array after removing duplicates:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
