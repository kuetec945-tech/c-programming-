#include<stdio.h>
int main(){
	int number, result;
	printf("enter a whole number\n");
	scanf("%d", &number);
	
	result=number/1;
	if (result<0){
		printf("the number is negative");
	}
	else {
		printf("positive");
	}
	return 0;
}