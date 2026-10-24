#include<stdio.h>
int main(){
	int a, b, sum, product;
	float quotient;
	
	printf("enter values for a and b\n");
	scanf("%d,%d", &a, &b);
	
	sum=a+b;
	product=a*b;
	quotient=(a/b);
	printf("the sum of both values is %d\n", sum);
	printf("the product of both values is %d\n", product);
	printf("the quotient of both values is %.2f\n", quotient);
	return 0;
}