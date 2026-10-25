#include<stdio.h>
int main(){
	int SI, P, R, T; 
	printf("enter values for principal(P), rate(R), time(T)\n");
	scanf("%d, %d, %d", &P, &R, &T);
	
	SI=P*R*T;
	printf("the simple interest is = %d", SI);
	return 0;
}