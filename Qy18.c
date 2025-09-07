#include <stdio.h>

// Function to check if matrix is upper triangular
int isUpperTriangular(int a[10][10], int n) {
    int i, j;
    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            if(a[i][j] != 0) {
                return 0; // Not upper triangular if element below diagonal is not zero
            }
        }
    }
    return 1; // Upper triangular if all below diagonal elements are zero
}

int main() {
    int n, i, j;
    int matrix[10][10];

    printf("Enter size of square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    if(isUpperTriangular(matrix, n)) {
        printf("The matrix is upper triangular.\n");
    } else {
        printf("The matrix is NOT upper triangular.\n");
    }

    return 0;
}
