#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    int *p1, *p2, *pSum;
    int i;

    // Read first matrix
    printf("Enter the elements of first 3x3 matrix:\n");
    for(i = 0; i < 9; i++) {
        scanf("%d", &mat1[0][0] + i);
    }

    // Read second matrix
    printf("Enter the elements of second 3x3 matrix:\n");
    for(i = 0; i < 9; i++) {
        scanf("%d", &mat2[0][0] + i);
    }

    // Set pointers to first elements of matrices
    p1 = &mat1[0][0];
    p2 = &mat2[0][0];
    pSum = &sum[0][0];

    // Add the matrices using pointers
    for(i = 0; i < 9; i++) {
        *(pSum + i) = *(p1 + i) + *(p2 + i);
    }

    // Print the sum matrix
    printf("\nSum of the two matrices:\n");
    for(i = 0; i < 9; i++) {
        printf("%d ", *(pSum + i));
        if((i + 1) % 3 == 0) {
            printf("\n");
        }
    }

    return 0;
}
