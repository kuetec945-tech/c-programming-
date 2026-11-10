#include <stdio.h>

int main() {
    int num, maxDigit = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num /= 10;
    }

    printf("Largest digit: %d\n", maxDigit);
    return 0;
}