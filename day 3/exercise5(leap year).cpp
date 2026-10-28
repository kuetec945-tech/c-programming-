#include<stdio.h>
int main(){
	int year, leap;
	printf("enter a year:\n");
	scanf("%d", &year);
	
	leap= year % 4;
	if (leap==0){
		printf("%d is a leap year", year);
	}
	else {
		printf("%d is not a leap year", year);
	}
	return 0;
	}
	