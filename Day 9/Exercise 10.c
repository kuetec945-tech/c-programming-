#include <stdio.h>

int main() {
    int N;
    printf("Enter an odd width N: ");
    scanf("%d", &N);

    int mid = (N + 1) / 2;

    // Top half including middle row
    for (int i = 1; i <= mid; i++) {
        for (int j = 1; j <= mid - i; j++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("*");
        printf("\n");
    }

    // Bottom half
    for (int i = mid - 1; i >= 1; i--) {
        for (int j = 1; j <= mid - i; j++) printf(" ");
        for (int k = 1; k <= (2 * i - 1); k++) printf("*");
        printf("\n");
    }

    return 0;
}