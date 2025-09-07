#include <stdio.h>

int main() {
    int matrix[10][10];
    int *ptr;
    int i, j, n;
    int sum = 0;

    // Ask for size of the square matrix
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);

    // Read elements into the matrix
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Pointer points to the first element of the matrix
    ptr = &matrix[0][0];

    // Loop through diagonal elements using pointer
    for(i = 0; i < n; i++) {
        sum += *(ptr + i * n + i); // main diagonal element
    }

    // Display the result
    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
