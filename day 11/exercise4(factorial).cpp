#include<stdio.h>
//Write a function that calculates the factorial of a non-negative integer
int factorial(int number){
	int result=1;
	printf("enter a number\n");
	scanf("%d", &number);
	for (int i=1; i<=number; i++){
	 result*=i;
	}
	return result;
}
int main(){
	int n;
	int fac=factorial(n);
	printf("%d", fac);
	return 0;
}