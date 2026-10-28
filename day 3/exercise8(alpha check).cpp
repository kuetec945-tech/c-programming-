#include <stdio.h>
#include <ctype.h> 

int main() {
    char ch;

    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    if (!isalpha(ch)) {
        printf("%c is not a valid alphabet letter.\n", ch);
    } 
    else if (ch == 'a' || ch == 'A' || 
             ch == 'e' || ch == 'E' || 
             ch == 'i' || ch == 'I' || 
             ch == 'o' || ch == 'O' || 
             ch == 'u' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } 
    else {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}
