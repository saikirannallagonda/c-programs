#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	printf("Number Guessing Game.\n");

	// seed the random number generator
	srand(time(0));

	// Generate random number between 1 and 100
	int random_number = (rand() % 100) + 1;

	int no_of_guesses = 0;
	int guessed_number;
	do {
		printf("Guess the number:");
		scanf("%d", &guessed_number);
		if(guessed_number > random_number) {
			printf("Lower number please!\n");
		} else if(guessed_number < random_number) {
			printf("Higher number please!\n");
		} else {
			printf("Congrats!!\n");
		}
		no_of_guesses++;
	} while(guessed_number != random_number);
	printf("You guessed the number %d in %d guesses.\n", random_number, no_of_guesses);
	return 0;
}
