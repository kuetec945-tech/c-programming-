#include<stdio.h>
int main(){
	int a, b, c;
	float average;
	printf("enter values for a, b and c\n");
	scanf("%d,%d,%d", &a, &b, &c);
	
	average=(a+b+c)/3;
	printf("the average of the 3 numbers is %f", average);
	
	return 0;
}