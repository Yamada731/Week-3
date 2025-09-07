#include <stdio.h>

int main() {
    int arr[10][10];
    int rows, cols;
    int i, j;
    int sum = 0;
    float mean;

    // Asking user for rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Taking input for the 2D array
    printf("Enter the elements of the array:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            printf("Element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculating sum of all elements
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    // Calculating mean
    mean = (float)sum / (rows * cols);

    // Showing results
    printf("\nSum of all elements = %d\n", sum);
    printf("Mean of the elements = %.2f\n", mean);

    return 0;
}
