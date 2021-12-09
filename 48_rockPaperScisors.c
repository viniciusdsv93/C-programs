# include <stdio.h>

int main() {
	int player1opt, player2opt;
	
	printf("Player 1 option: [1] Rock; [2] Paper; [3] Scisors:\n");
	scanf("%i", &player1opt);
	printf("Player 2 option: [1] Rock; [2] Paper; [3] Scisors:\n");
	scanf("%i", &player2opt);
	
	if (player1opt == 1) {
		if (player2opt == 1) {
			printf("Tie! Both players choose Rock!\n");
		}
		else if (player2opt == 2) {
			printf("Player 2 wins! Paper beats Rock!\n");
		}
		else if (player2opt == 3) {
			printf("Player 1 wins! Rock beats Scisors!\n");
		}
	}
	else if (player1opt == 2) {
		if (player2opt == 1) {
			printf("Player 1 wins! Paper beats Rock!\n");
		}
		else if (player2opt == 2) {
			printf("Tie! Both players choose Paper!\n");
		}
		else if (player2opt == 3) {
			printf("Player 2 wins! Scisors beats Paper!\n");
		}
	}
	else if (player1opt == 3) {
		if (player2opt == 1) {
			printf("Player 2 wins! Rock beats Scisors!\n");
		}
		else if (player2opt == 2) {
			printf("Player 1 wins! Scisors beats Paper!\n");
		}
		else if (player2opt == 3) {
			printf("Tie! Both players choose Scisors!\n");
		}
	}
	else {
		printf("Invalid option.\n");
	}
	
	return 0;
}
