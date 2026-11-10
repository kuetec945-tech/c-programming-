#include <stdio.h>

int main() {
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Prime numbers between 1 and %d: ", N);
    for (int i = 2; i <= N; i++) {
        int isPrime = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}