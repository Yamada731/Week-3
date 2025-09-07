#include <stdio.h>

#define MAX 10

void readMatrix(int p, int q, int r, int mat[MAX][MAX][MAX], int num) {
    int i, j, k;
    printf("Enter elements of matrix %d (%dx%dx%d):\n", num, p, q, r);
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < r; k++) {
                printf("Element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &mat[i][j][k]);
            }
        }
    }
}

void displayMatrix(int p, int q, int r, int mat[MAX][MAX][MAX]) {
    int i, j, k;
    printf("Matrix elements:\n");
    for(i = 0; i < p; i++) {
        printf("Slice %d:\n", i);
        for(j = 0; j < q; j++) {
            for(k = 0; k < r; k++) {
                printf("%d ", mat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void sumMatrices(int p, int q, int r, int mat1[MAX][MAX][MAX], int mat2[MAX][MAX][MAX], int sum[MAX][MAX][MAX]) {
    int i, j, k;
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < r; k++) {
                sum[i][j][k] = mat1[i][j][k] + mat2[i][j][k];
            }
        }
    }
}

void transposeMatrix(int p, int q, int r, int mat[MAX][MAX][MAX], int trans[MAX][MAX][MAX]) {
    // Transpose each 2D slice along p dimension (swap rows and columns)
    int i, j, k;
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < r; k++) {
                // We transpose the q and r dimensions: trans[i][k][j] = mat[i][j][k]
                trans[i][k][j] = mat[i][j][k];
            }
        }
    }
}

void multiplyMatrices(int p, int q, int r, int mat1[MAX][MAX][MAX], int mat2[MAX][MAX][MAX], int prod[MAX][MAX][MAX]) {
    int i, j, k;
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < r; k++) {
                prod[i][j][k] = mat1[i][j][k] * mat2[i][j][k];
            }
        }
    }
}

int main() {
    int p, q, r;
    int mat1[MAX][MAX][MAX], mat2[MAX][MAX][MAX];
    int sum[MAX][MAX][MAX], trans[MAX][MAX][MAX], prod[MAX][MAX][MAX];
    int choice;

    printf("Enter dimensions p, q, r (max 10): ");
    scanf("%d%d%d", &p, &q, &r);

    do {
        printf("\nMenu:\n");
        printf("1. Read matrices\n");
        printf("2. Display matrices\n");
        printf("3. Sum of matrices\n");
        printf("4. Transpose of matrices\n");
        printf("5. Product of matrices\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                readMatrix(p, q, r, mat1, 1);
                readMatrix(p, q, r, mat2, 2);
                break;

            case 2:
                printf("Matrix 1:\n");
                displayMatrix(p, q, r, mat1);
                printf("Matrix 2:\n");
                displayMatrix(p, q, r, mat2);
                break;

            case 3:
                sumMatrices(p, q, r, mat1, mat2, sum);
                printf("Sum of matrices:\n");
                displayMatrix(p, q, r, sum);
                break;

            case 4:
                transposeMatrix(p, q, r, mat1, trans);
                printf("Transpose of Matrix 1:\n");
                displayMatrix(p, r, q, trans);  // note swapped q and r for display

                transposeMatrix(p, q, r, mat2, trans);
                printf("Transpose of Matrix 2:\n");
                displayMatrix(p, r, q, trans);
                break;

            case 5:
                multiplyMatrices(p, q, r, mat1, mat2, prod);
                printf("Product of matrices:\n");
                displayMatrix(p, q, r, prod);
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 6);

    return 0;
}
