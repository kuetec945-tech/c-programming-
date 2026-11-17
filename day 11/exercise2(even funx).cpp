#include<stdio.h>
//Write a function that determines whether an integer is even.
void numcheck(int num){
	if (num%2==0){
		printf("%d is an even number", num);	
	}
	else {
		printf("%d is an odd number", num);
	}
	
}
int main(){
	int number;
	printf("enter a number");
	scanf("%d", &number);
	numcheck(number);
	
	return 0;
}