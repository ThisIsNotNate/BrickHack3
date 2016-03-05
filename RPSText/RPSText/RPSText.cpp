// RPSText.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#define ROCK          1
#define PAPER         2
#define SCISSORS      3

int main()
{
	int p1, p2, cont = 1, win = 0;
	while (cont == 1) {
		printf("Player 1: ");
		scanf_s("%d", &p1);

		printf("Player 2: ");
		scanf_s("%d", &p2);

		cont = -1;
		if ((p1 == ROCK && p2 == ROCK) || (p1 == PAPER && p2 == PAPER) || (p1 == SCISSORS && p2 == SCISSORS))
			cont = 1;
		else if (p1 == ROCK && p2 == SCISSORS)
			win = 1;
		else if (p1 == PAPER && p2 == ROCK)
			win = 1;
		else if (p1 == SCISSORS && p2 == PAPER)
			win = 1;
		else if (p2 == ROCK && p1 == SCISSORS)
			win = 2;
		else if (p2 == PAPER && p1 == ROCK)
			win = 2;
		else if (p2 == SCISSORS && p1 == PAPER)
			win = 2;
	}
	printf("The winner is: Player %d", win);
	return 0;
}

