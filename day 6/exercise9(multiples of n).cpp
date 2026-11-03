#include<stdio.h>
int main(){
	int n, mul;
		printf("entre a positive integer\n");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		mul=i*n;
	
		printf("%d\t", mul);
	}
		printf("are the multiples of %d:", n);
	return 0;
}
