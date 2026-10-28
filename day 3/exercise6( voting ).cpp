#include<stdio.h>
int main(){
	int age;
	printf("enter your age\n");
	scanf("%d", &age);
	
	if (age>=18){
		printf("your are eligible to vote\n");
	}
	else{
		printf("your are not eligible to vote\n");
	}
	return 0;
}