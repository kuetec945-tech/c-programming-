#include<stdio.h>
int main(){
	float length, width, perimeter;
	printf("enter a value for length and another for width\n");
	scanf("%f,%f", &length, &width);
	
	perimeter= 2*(length+width);
	printf("the perimeter of the rectangle is %f\n", perimeter);
	return 0;
}