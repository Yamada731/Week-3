#include <stdio.h>

int main() {
    int n, i, j;
    int matrix[10][10];
    int sum = 0;

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Sum elements where row < column (above main diagonal)
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of elements above the main diagonal = %d\n", sum);

    return 0;
}
