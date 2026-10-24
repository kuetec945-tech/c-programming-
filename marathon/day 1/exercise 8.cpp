#include<stdio.h>
int main(){
	int seconds; 
	double hours;
	printf("enter a value for seconds\n");
	scanf("%d", &seconds);
	
	hours=	seconds/3600;
	printf("the equivalent of %d seconds in hours is %lf", seconds, hours);
	return 0;
}