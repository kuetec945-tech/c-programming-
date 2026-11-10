#include<stdio.h>
int main(){
	//print integers from N down to 1 using a while loop.
	int n;
	printf("enter a number: ");
	scanf("%d", &n);
	
	
	while(n>=1){
		printf("%d\t", n);
		n--;
	}
	
	return 0;
}