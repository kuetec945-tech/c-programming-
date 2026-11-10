#include <stdio.h>

int main() {
    int num, evenCount = 0, oddCount = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) evenCount = 1;
    if (num < 0) num = -num;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
        num /= 10;
    }

    printf("Even digits: %d, Odd digits: %d\n", evenCount, oddCount);
    return 0;
}