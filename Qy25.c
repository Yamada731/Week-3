#include <stdio.h>

int main() {
    float arr[100];
    int n, i, pos;
    float newNum;

    // Read size of array
    printf("Enter number of elements (max 100): ");
    scanf("%d", &n);

    // Read elements into array
    printf("Enter %d floating point numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    // Read the new number and the position to insert
    printf("Enter the new number to insert: ");
    scanf("%f", &newNum);

    printf("Enter the position (0 to %d) where you want to insert: ", n);
    scanf("%d", &pos);

    // Check if position is valid
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new number
    arr[pos] = newNum;
    n++; // Increase size

    // Print updated array
    printf("Updated array:\n");
    for(i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }

    printf("\n");

    return 0;
}
