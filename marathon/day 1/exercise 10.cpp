#include <stdio.h>

int main() {
    int a=4, b=9;

    a = a + b; 
    b = a - b; 
    a = a - b; 

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}