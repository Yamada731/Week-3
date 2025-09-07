#include <stdio.h>

int main() {
    int arr[100];
    int n, i;
    int sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculating sum of squares
    for(i = 0; i < n; i++) {
        sum += arr[i] * arr[i];
    }

    // Showing the result
    printf("\nSum of squares of the elements = %d\n", sum);

    return 0;
}
