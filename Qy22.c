#include <stdio.h>

int main() {
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int (*ptr)[3];  // Pointer to an array of 3 integers
    int i, j;

    ptr = arr;  // Pointing to the 2D array

    printf("Accessing elements using pointer:\n");

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            // *(*(ptr + i) + j) is same as arr[i][j]
            printf("%d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }

    return 0;
}
