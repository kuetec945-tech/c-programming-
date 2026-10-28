#include<stdio.h>
int main(){
	int number, result;
	printf("enter a whole number\n");
	scanf("%d", &number);

	result = number % 2;
	if (result==0){
		printf("the number even");
	}
	else {
		printf("the number is odd");
	}
	return 0;
}