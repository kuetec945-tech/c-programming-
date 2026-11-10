#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer greater than 1: ");
    scanf("%d", &num);

    printf("Prime factorization: ");
    for (int divisor = 2; divisor * divisor <= num; divisor++) {
        while (num % divisor == 0) {
            printf("%d ", divisor);
            num /= divisor;
        }
    }
    if (num > 1) {
        printf("%d", num);
    }
    printf("\n");

    return 0;
}