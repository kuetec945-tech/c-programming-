#include <stdio.h>

int main() {
    int base, exp;
    long long result = 1;

    printf("Enter base (a): ");
    scanf("%d", &base);
    printf("Enter exponent (b >= 0): ");
    scanf("%d", &exp);

    for (int i = 1; i <= exp; i++) {
        result *= base;
    }

    printf("%d^%d = %lld\n", base, exp, result);
    return 0;
}