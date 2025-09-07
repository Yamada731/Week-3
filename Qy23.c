#include <stdio.h>

int main() {
    int num, temp, digit, digits[10];
    int count = 0, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Extract digits from the end
    while (temp > 0) {
        digit = temp % 10;        // get last digit
        digits[count] = digit;    // store it
        count++;
        temp = temp / 10;         // remove last digit
    }

    printf("Digits in the number %d are:\n", num);

    // Digits are stored in reverse, so print them in reverse
    for (i = count - 1; i >= 0; i--) {
        printf("%d ", digits[i]);
    }

    printf("\n");

    return 0;
}
