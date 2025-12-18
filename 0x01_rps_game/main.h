#ifndef MAIN_H
#define MAIN_H

/**
 * enum gameState - all the possible game states
 * @DRAW: 0
 * @WIN: 1
 * @LOSS: 2
 */
enum gameState
{
	DRAW, WIN, LOSS
};
/**
 * enum Shapes - all the possible shapes in the game
 * @ROCK: 0
 * @PAPER: 1
 * @SCISSORS: 2
 */
enum Shapes
{
	ROCK, PAPER, SCISSORS
};

int random_f(int a, int b);


#endif
