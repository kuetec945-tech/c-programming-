#include<stdio.h>
int main(){
	int score;
	//Read a student's score from 0 to 100 and assign grades using your instructor's grading scale.
	// State the scale used.
	printf("enter students score\n");
	scanf("%d", &score);
	
	    switch (score) {
        case 80:
            printf("Excellent work!\n");
            break;
        case 70:
            printf("Good job!\n");
            break;
        case 60:
            printf("You passed.\n");
            break;
        case 50:
            printf("Average.\n");
            break;
        default:
            printf("you failed, looserrrr\n");
    }

    return 0;
}