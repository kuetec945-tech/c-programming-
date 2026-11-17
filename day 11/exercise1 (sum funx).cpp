#include<stdio.h>
//Write a function that returns the sum of two integers.
int addnum(int a, int b){
	
	return a + b;
}
int main(){
	int num1, num2;
	printf("enter 2 integers\n");
	scanf("%d, %d", &num1, &num2);
	
    int sum=addnum(num1, num2);
	printf("%d + %d = %d",num1, num2, sum);
	
	return 0;
}