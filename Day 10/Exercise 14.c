#include <stdio.h>

int main() {
    int N;
    long long a = 0, b = 1, fib = 0;

    printf("Enter N: ");
    scanf("%d", &N);

    if (N == 1) fib = 0;
    else if (N == 2) fib = 1;
    else {
        for (int i = 3; i <= N; i++) {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("The %d-th Fibonacci number is: %lld\n", N, (N == 2 ? 1 : fib));
    return 0;
}