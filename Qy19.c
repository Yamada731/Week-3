#include <stdio.h>

// Function to check if matrix is lower triangular
int isLowerTriangular(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i][j] != 0) {
                return 0;  // Not lower triangular if element above diagonal is not zero
            }
        }
    }
    return 1;  // Lower triangular if all elements above diagonal are zero
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

    if(isLowerTriangular(matrix, n)) {
        printf("The matrix is lower triangular.\n");
    } else {
        printf("The matrix is NOT lower triangular.\n");
    }

    return 0;
}
