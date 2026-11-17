#include<stdio.h>
//Write a function that returns the largest of three integers.
void compare(int number){
	printf("enter a 3 digit number\n");
	scanf("%d", &number);
	
	int A=(number/100);
	int B=(number%100)/10;
	int C=(number%100)%10;
	printf("ther respective numbers are %d, %d, %d\n", A, B, C);
	
	if (A>B && A>C){
		printf("%d is greater", A);
	}
	else if (B>A && B>C){
		printf("%d is greater", B);
	}
	else {
		printf("%d is greater", C);
	}
}
int main (){
	int num;
	compare(num);
	
	return 0;
}