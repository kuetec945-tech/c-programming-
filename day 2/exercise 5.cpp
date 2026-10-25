#include<stdio.h>
int main(){
	int number, tens, units;
	
    printf("Enter a two-digit integer\n ");
    scanf("%d", &number);

    tens = number / 10;
    units = number % 10;

    printf("Tens digit: %d\n", tens);
    printf("Units digit: %d\n", units);

    return 0;
}