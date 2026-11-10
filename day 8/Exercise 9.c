#include <stdio.h>

int main() {
    int N;
    long long t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    printf("Fibonacci Sequence: ");
    for (int i = 1; i <= N; i++) {
        printf("%lld ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");

    return 0;
}