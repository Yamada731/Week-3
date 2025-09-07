#include <stdio.h>

int main() {
    int arr[10][10];
    int odd[100], even[100];
    int rows, cols;
    int i, j;
    int oddCount = 0, evenCount = 0;

    printf("Enter rows (max 10): ");
    scanf("%d", &rows);
    printf("Enter columns (max 10): ");
    scanf("%d", &cols);

    printf("Enter the elements:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Loop to separate odd and even numbers
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++) {
            if(arr[i][j] % 2 == 0) {
                even[evenCount] = arr[i][j];
                evenCount++;
            } else {
                odd[oddCount] = arr[i][j];
                oddCount++;
            }
        }
    }

    // Print odd numbers
    printf("Odd numbers: ");
    for(i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }

    printf("\nEven numbers: ");
    for(i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");

    return 0;
}
