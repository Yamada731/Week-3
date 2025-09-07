#include <stdio.h>

int main() {
    int arr[100];
    int i, j;

    printf("Enter 100 numbers:\n");
    for(i = 0; i < 100; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
  
    printf("\nPairs of numbers whose sum is 50:\n");
    for(i = 0; i < 100; i++) {
        for(j = i + 1; j < 100; j++) {
            if(arr[i] + arr[j] == 50) {
                printf("%d + %d = 50\n", arr[i], arr[j]);
            }
        }
    }

    return 0;
}
