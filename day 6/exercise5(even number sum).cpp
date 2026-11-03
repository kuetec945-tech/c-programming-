#include<stdio.h>
int main(){
	int n, sum; 
	printf("entre a positive integer\n");
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		if (i % 2==0){
			
				printf("%d\n", i);
		}
		sum+=i;
	}
	printf("total sum is equal to %d", sum);
	
	return 0;
}