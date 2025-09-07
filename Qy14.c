#include <stdio.h>

// Functions for 3D matrix operations
void read_3d(int mat[][5][5], int p, int q, int r) {
    printf("Enter elements:\n");
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < r; k++)
                scanf("%d", &mat[i][j][k]);
}

void display_3d(int mat[][5][5], int p, int q, int r) {
    for (int i = 0; i < p; i++) {
        printf("Slice %d:\n", i + 1);
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < r; k++) {
                printf("%d\t", mat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}

void sum_3d(int m1[][5][5], int m2[][5][5], int sum[][5][5], int p, int q, int r) {
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < r; k++)
                sum[i][j][k] = m1[i][j][k] + m2[i][j][k];
}

void product_3d(int m1[][5][5], int m2[][5][5], int prod[][5][5], int p, int q, int r) {
     for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            for (int k = 0; k < r; k++)
                prod[i][j][k] = m1[i][j][k] * m2[i][j][k];
}


int main() {
    int mat1[5][5][5], mat2[5][5][5], res[5][5][5];
    int p, q, r, choice;

    printf("Enter dimensions (p q r, max 5x5x5): ");
    scanf("%d %d %d", &p, &q, &r);

    do {
        printf("\n---MENU---\n");
        printf("1. Read matrices\n2. Display matrices\n");
        printf("3. Sum of matrices\n4. Product (element-wise)\n");
        printf("5. Transpose (not implemented)\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter Matrix 1:\n"); read_3d(mat1, p, q, r);
                printf("Enter Matrix 2:\n"); read_3d(mat2, p, q, r);
                break;
            case 2:
                printf("--- Matrix 1 ---\n"); display_3d(mat1, p, q, r);
                printf("--- Matrix 2 ---\n"); display_3d(mat2, p, q, r);
                break;
            case 3:
                sum_3d(mat1, mat2, res, p, q, r);
                printf("--- Sum Matrix ---\n"); display_3d(res, p, q, r);
                break;
            case 4:
                product_3d(mat1, mat2, res, p, q, r);
                printf("--- Product Matrix ---\n"); display_3d(res, p, q, r);
                break;
            case 5:
                 printf("Transpose for 3D matrices is not a standard operation.\n");
                break;
            case 6: break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 6);

    return 0;
}
