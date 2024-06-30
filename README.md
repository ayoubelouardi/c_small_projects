# c_small_projects
a list of small Project with C, so i can learn how to build things from scratch! 



## Project 1:
- Game Simulation Case Study: Rock, Paper, Scissors
### Description: 
Each player simultaneously forms one of three shapes with an outstretched hand. The shapes are “rock”, “paper”, and “scissors”. A simultaneous, zero-sum game, it has three possible outcomes: a draw, a win, or a loss. “rock” breaks (wins) “scissors”, “scissors” cuts (wins) “paper”, and “paper” covers (wins) “rock”. If both players choose the same shape, the game is a tie.

#### Example: 
```
$ gcc rps_game.c -o game
$ ./game
==================
	Round 0
==================
Enter 0 (ROCK), or 1 (PAPER), or 2 (SCISSORS):
0
Computer played PAPER
Player LOST!
==================
	Round 1
==================
Enter 0 (ROCK), or 1 (PAPER), or 2 (SCISSORS):
0
Computer played ROCK
It’s a DRAW!
==================
	Round 2
==================
Enter 0 (ROCK), or 1 (PAPER), or 2 (SCISSORS):
0
Computer played PAPER
Player LOST!
==================
	Round 3
==================
Enter 0 (ROCK), or 1 (PAPER), or 2 (SCISSORS):
0
Computer played PAPER
Player LOST!
##############################
#	the Player won          0 time
#	the Computer won          3 time
#	the Players draw          1 time
##############################
```
