#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int sum = 0;

    printf("Enter size of square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum elements where row > column (below main diagonal)
    for(i = 1; i < n; i++) {
        for(j = 0; j < i; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of elements below the main diagonal = %d\n", sum);

    return 0;
}
