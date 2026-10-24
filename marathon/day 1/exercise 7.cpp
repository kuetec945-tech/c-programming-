#include<stdio.h>
int main(){
	float celsius, fahrenheit;
	printf("enter a temperature in celsius\n");
	scanf("%f", &celsius);
	
	fahrenheit=	((celsius + 32) / 1.8);
	printf("the temperature in fahrenheit is  %.2f", fahrenheit);
	return 0;
}