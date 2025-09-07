#include <stdio.h>

// Function to read the size of the square
int readSize() {
    int size;
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    return size;
}

// Function to display the square pattern
void displaySquare(int size) {
    int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int n;

    // Read size from user
    n = readSize();

    // Display square of stars
    printf("\nSquare of size %d:\n", n);
    displaySquare(n);

    return 0;
}
