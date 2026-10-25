#include<stdio.h>
int main(){
	int num, hundreds, tens, units, sum;

    printf("Enter a three-digit integer: ");
    scanf("%d", &num);

    hundreds = num / 100;         
    tens = (num / 10) % 10;     
    units = num % 10;             

    sum = hundreds + tens + units;

    printf("The sum of the digits of %d is: %d\n", num, sum);

    return 0;
}