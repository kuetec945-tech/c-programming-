#include<stdio.h>
int main(){
//Read a character and display its ASCII value. Explain what happens when you add 1 to a character's integer value.
	char ch;
	printf("enter a character\n");
	scanf("%c", &ch);
	
	printf("the ASCII character for %c is %d", ch, ch);
	
	return 0;
}