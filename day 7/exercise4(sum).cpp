#include <stdio.h>

int main() {
    // Declare the variables needed
    int n, count = 0; 
    int sum = 0; // Added variable to hold the sum of digits

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid non-negative integer.\n");
        return 1;
    }

    // Logic to calculate the sum of the digits
    int temp = n; // Use a temporary variable to preserve the original value of n
    while (temp > 0) {
        sum += temp % 10; // Extract the last digit and add it to sum
        temp /= 10;       // Remove the last digit
    }

    // Handle the special case where the user enters 0
    if (n == 0) {
        sum = 0;
    }

    printf("The sum of the digits of %d is: %d\n", n, sum);

    return 0;
}
