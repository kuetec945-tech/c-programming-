#include<stdio.h>
int main(){
	float radius, circumference;
	printf("enter the circle's radius\n");
	scanf("%f", &radius);
	
	circumference = 2*3.14*radius;
	printf("the circle's circumference is %.2f", circumference);
	return 0;
}