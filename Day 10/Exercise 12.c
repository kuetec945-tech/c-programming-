#include <stdio.h>

int main() {
    int num, minDigit = 9;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num == 0) minDigit = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        num /= 10;
    }

    printf("Smallest digit: %d\n", minDigit);
    return 0;
}