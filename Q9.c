#include <stdio.h>

int main() {
    int matrix[10][10];
    int n, i, j;
    int product = 1;

    // Input size of square matrix
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);

    // Input elements of the matrix
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate product of elements above main diagonal
    // Elements where column index = row index + 1
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(j == i + 1) {
                product *= matrix[i][j];
            }
        }
    }

    // Show the result
    printf("\nProduct of elements above the main diagonal = %d\n", product);

    return 0;
}
