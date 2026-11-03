#include<stdio.h>
int main(){
	int n;
	int sum = 0;
		printf("entre a positive integer\n");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		sum+=i;
		printf("%d\n", i);
	}
	
	printf("total sum is equal to %d", sum);
	return 0;
}