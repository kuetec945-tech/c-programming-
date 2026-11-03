#include<stdio.h>
int main(){
	int n, count;
		printf("entre a positive integer:");
	scanf("%d", &n);
	for (int i=1; i<=n; i++){
		if(i%3==0 and i%5==0){
			count++;
		}
		printf("%d\t\n", i);
	}
	printf("there are %d number divisible by 3 and 5 in this series", count);
		return 0;
	}