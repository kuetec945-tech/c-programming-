#include <stdio.h>

int main() {
    int N;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("Coprime pairs (a, b) up to %d:\n", N);
    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            int a = i, b = j;
            while (b != 0) {
                int temp = b;
                b = a % b;
                a = temp;
            }
            if (a == 1) { // GCD is 1
                printf("(%d, %d) ", i, j);
            }
        }
    }
    printf("\n");

    return 0;
}