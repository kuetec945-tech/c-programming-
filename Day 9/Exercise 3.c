#include <stdio.h>

int main() {
    int N;
    printf("Enter number of rows N: ");
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}