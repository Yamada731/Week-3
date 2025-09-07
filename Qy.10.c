#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;
    int count = 0;

    // Input elements for 3x3 array
    printf("Enter 9 elements:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Count non-zero elements
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] != 0) {
                count++;
            }
        }
    }

    // Print the result
    printf("Total non-zero elements: %d\n", count);

    return 0;
}
