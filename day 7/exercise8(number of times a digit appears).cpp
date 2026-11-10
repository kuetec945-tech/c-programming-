#include <stdio.h>

int main() {
    int num, digit, specified, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter the digit to search for: ");
    scanf("%d", &specified);

    while (num > 0) {
        digit = num % 10;

        if (digit == specified) {
            count++;
        }

        num = num / 10;
    }

    printf("The digit appears %d times.\n", count);

    return 0;
}