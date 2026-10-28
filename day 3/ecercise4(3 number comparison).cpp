#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("enter 3 numbers\n");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	
	if(num1>num2 && num1>num3){
		printf("\t %d is greater", num1);
	}
	else if(num2>num1 && num2>num3){
		printf("\t %d is greater", num1);
	}
	else (num3>num1 && num3>num2){
		printf("\t %d is greater", num2);
	}
	
	return 0;
}