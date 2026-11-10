#include <stdio.h>
int main() {
    int n;
    int count = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

        // Keep dividing by 10 until the number becomes 0
        while (n > 0) {
            count++;    // We found a digit!
            n = n / 10; // Drop the last digit (e.g., 456 becomes 45, then 4, then 0)
        }
    

    printf("There are %d digits in this integer.\n", count);
    return 0;
}
