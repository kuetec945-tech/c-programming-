#include <stdio.h>

int main() {
    int N, found = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N / 2; i++) {
        // Check if i is prime
        int isPrime1 = 1;
        for (int k = 2; k * k <= i; k++) {
            if (i % k == 0) { isPrime1 = 0; break; }
        }

        if (isPrime1) {
            int j = N - i;
            // Check if j is prime
            int isPrime2 = 1;
            for (int k = 2; k * k <= j; k++) {
                if (j % k == 0) { isPrime2 = 0; break; }
            }

            if (isPrime2) {
                printf("%d = %d + %d\n", N, i, j);
                found = 1;
                break;
            }
        }
    }

    if (!found) {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", N);
    }

    return 0;
}