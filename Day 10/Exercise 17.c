#include <stdio.h>

int main() {
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Armstrong numbers up to %d: ", N);
    for (int i = 1; i <= N; i++) {
        int temp = i, digits = 0, sum = 0;

        // Count digits
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = i;
        // Compute power sum
        while (temp > 0) {
            int d = temp % 10;
            int pow = 1;
            for (int k = 0; k < digits; k++) {
                pow *= d;
            }
            sum += pow;
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}