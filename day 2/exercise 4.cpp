#include<stdio.h>
int main(){
	float IP,  discount;
	float FP;
	printf("enter the products initial price\n");
	scanf("%f", &IP);
	printf("enter the products discount\n");
	scanf("%f", &discount);
	
	FP = IP*(discount/100);
	
	printf("the final price is = %f", FP);
	
	return 0;
}