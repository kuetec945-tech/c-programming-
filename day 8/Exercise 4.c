#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int num1 = a, num2 = b;

    while (num1 != num2) {
        if (num1 > num2) {
            num1 = num1 - num2;
        } else {
            num2 = num2 - num1;
        }
    }

    printf("GCD of %d and %d is %d\n", a, b, num1);
    return 0;
}