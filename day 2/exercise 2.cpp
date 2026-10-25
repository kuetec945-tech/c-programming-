#include<stdio.h>
int main(){
	int seconds;
	float minutes, hours, days;
	printf("enter time in seconds\n");
	scanf("%d", &seconds);
	
	minutes= seconds/60;
	hours = seconds/3600;
	days= hours/24;
	
	printf("%d seconds in minutes = %f minutes\n", seconds, minutes);
	printf("%d seconds in hours = %f hours\n", seconds, hours);
	printf("%d seconds in days = %f days", seconds, days);
	
	return 0;
}