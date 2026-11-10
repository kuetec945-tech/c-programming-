#include <stdio.h>

int main() {
    int num;

    do {
        printf("Enter a positive number: ");
        scanf("%d", &num);

        if (num <= 0) {
            printf("Invalid input! Try again.\n");
        }

    } while (num <= 0);

    printf("Valid number entered: %d\n", num);

    return 0;
}