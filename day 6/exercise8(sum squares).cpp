#include<stdio.h>
int main(){
	int n;
	int sum = 0;
		printf("entre a positive integer:");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		int square = i * i;
		sum += square;
		printf("%d\n", square);
	}
	
	printf("total sum is equal to %d", sum);
	return 0;
}