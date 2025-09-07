#include <stdio.h>

int main() {
    int n1, n2, i, total;
    float arr1[50], arr2[50], merged[100];

    // Read size of first array
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    // Read elements of first array
    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%f", &arr1[i]);
    }

    // Read size of second array
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    // Read elements of second array
    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%f", &arr2[i]);
    }

    // Merge arrays
    total = n1 + n2;
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    for(i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array in reverse order
    printf("\nMerged array in reverse order:\n");
    for(i = total - 1; i >= 0; i--) {
        printf("%.2f ", merged[i]);
    }
    printf("\n");

    return 0;
}
