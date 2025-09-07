#include <stdio.h>

int main() {
    int arr[100];
    int n, temp, i;

    printf("Enter the number of elements in the array (max 100): ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Array must have at least 2 elements.\n");
        return 0;
    }
  
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    temp = arr[1];
    arr[1] = arr[n - 2];
    arr[n - 2] = temp;

    printf("\nArray after swapping second and second last elements:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
