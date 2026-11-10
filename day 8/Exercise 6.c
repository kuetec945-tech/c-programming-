#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int num1 = a, num2 = b;

    // Find GCD first
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    int gcd = num1;
    // Formula: LCM(a, b) = (a * b) / GCD(a, b)
    int lcm = (a * b) / gcd;

    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}