#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/*
	 	0 = Snake
		1 = Water
		2 = Gun
	 */
	srand(time(0));
	int player, computer = rand() % 3;
	printf("Choose 0 for Snake, 1 for Water and 2 for Gun \n");
	printf("You : ");
	scanf("%d", &player);
	printf("Computer : %d\n", computer);
	if(player == 0 && computer == 0) {
		printf("Draw!\n");
	} else if(player == 0 && computer == 1) {
		printf("You Won!\n");
	} else if(player == 0 && computer == 2) {
		printf("You Lose!\n");
	} else if(player == 1 && computer == 0) {
		printf("You Lose!\n");
	} else if(player == 1 && computer == 1) {
		printf("Draw!\n");
	} else if(player == 1 && computer == 2) {
		printf("You Win!\n");
	} else if(player == 2 && computer == 0) {
		printf("You Win!\n");
	} else if(player == 2 && computer == 1) {
		printf("You Lose!\n");
	} else if(player == 2 && computer == 2) {
		printf("Draw!\n");
	} else {
		printf("Wrong Choice!\n");
	}

	return 0;
}
