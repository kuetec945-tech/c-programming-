#include<stdio.h>
int main(){
	//keep reading integers until the user enters zero, then print their sum. Zero is not included.
	int sum=0;
	int n;
		printf("enter a number:");
		scanf("%d", &n);
	while (n>=1){
		
		sum+=n;
		printf("the sum of old and new number is %d", sum);
		printf("\n");
		printf("enter a new number");
		scanf("%d", &n);
	}
	return 0;
}