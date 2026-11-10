#include<stdio.h>
int main(){
	float marks[6];
	printf("enter the array elements\n");
	
	for (int i=0; i<6; i++){
			printf("%f\n", i+1);
		scanf("%f", &marks[i]);
	}
		printf("the array values are");
	  for (int i=0; i<6; i++){
	  	printf("%f\n", marks[i]);
	  }

	return 0;
}