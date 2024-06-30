#include "main.h"
#include <stdio.h>

/**
 * main - Game Simulation Case Study: Rock, Paper, Scissors
 * Description:
 * Each player simultaneously forms one of three shapes with an outstretched
 * hand. The shapes are “rock”, “paper”, and “scissors”. A simultaneous, zero-sum
 * game, it has three possible outcomes: a draw, a win, or a loss. “rock” breaks
 * (wins) “scissors”, “scissors” cuts (wins) “paper”, and “paper” covers (wins)
 * “rock”. If both players choose the same shape, the game is a tie.
 * Return: Always 0
 */

enum {DRAW, WIN, LOSS};
enum {ROCK, PAPER, SCISSORS};
int randChoice(void);
char *numberIntoShape(int);
int howsWon(int, int);
void print_match_result(int a[]);
int input(int);

int main(void)
{
	int playerChoice;
	int computerChoice;
	int result;
	int round = 0;
	int winTreashold = 3;
	int results[3] = {0};

	while (results[1] != winTreashold && results[2] != winTreashold)
	{
		playerChoice = input(round++);
		if (playerChoice < 0 || playerChoice > 2)
		{
			puts("Please enter a valid input");
			continue;
		}
		computerChoice = randChoice();
		printf("Computer played %s\n", numberIntoShape(computerChoice));
		result = howsWon(playerChoice, computerChoice);
		if (result == DRAW)
		{
			results[0]++;
			puts("It’s a DRAW!");
		}
		else if (result == WIN)
		{
			results[1]++;
			puts("player WON!");
		}
		else
		{
			results[2]++;
			puts("Player LOST!");
		}
	}
	print_match_result(results);
	return (0);
}

int randChoice(void)
{
	return (random_f(0, 2));
}

char *numberIntoShape(int n)
{
	switch (n)
	{
		case ROCK:
			return "ROCK";
		case PAPER:
			return "PAPER";
		case SCISSORS:
			return "SCISSORS";
	}
	return "";
}

int howsWon(int p, int c)
{
	if (p == c)
	{
		return DRAW;
	}
	else if ((p == ROCK && c == SCISSORS) ||
			(p == PAPER && c == ROCK) ||
			(p == SCISSORS && c == PAPER))
	{
		return WIN;
	}
	else
	{
		return LOSS;
	}
	return -1; 
}

void print_match_result(int results[])
{
	puts("##############################");
	printf("#\tthe Player won %10d time\n", results[1]);
	printf("#\tthe Computer won %10d time\n", results[2]);
	printf("#\tthe Players draw %10d time\n", results[0]);
	puts("##############################");
}

int input(int round)
{
	int n;
	puts("==================");
	printf("\tRound %d\n", round);
	puts("==================");
	puts("Enter 0 (ROCK), or 1 (PAPER), or 2 (SCISSORS): ");
	scanf("%d", &n);
	return (n);
}
