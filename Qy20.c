#include <stdio.h>

// Function to check if matrix is symmetric
int isSymmetric(int a[10][10], int n) {
    int i, j;
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                return 0;  // Not symmetric if any element is not equal to its transpose
            }
        }
    }
    return 1;  // Symmetric if all elements match their transpose
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

    if(isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}
