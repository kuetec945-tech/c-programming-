#include<stdio.h>
int main(){
	//Read two integers and print the results of all six comparisons: ==, !=, <, >, <= and >=.
	int num1, num2;
	printf("enter the values for num1 and num2\n");
	scanf("%d,%d", &num1, &num2);
	
	if (num1>num2){
		printf("%d is greater than %d", num1, num2);
	}
	 if (num1==num2){
		printf("%d is equal to %d\n", num1, num2);
	}
	 if(num1!=num2){
		printf("%d is not equal to %d\n", num1, num2);	
	}
	if(num1<num2){
		printf("%d is less than %d\n", num1, num2);
	}
	 if(num1>=num2){
		printf("%d => %d", num1, num2);
	}
	 if(num1<=num2){
		printf("%d =< %d", num1, num2);
	}
	
	return 0;
}