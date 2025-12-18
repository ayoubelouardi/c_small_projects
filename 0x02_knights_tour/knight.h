#ifndef KNIGHT_HEADER_H
#define KNIGHT_HEADER_H


#include <stdio.h>








typedef enum
{
    FALSE,
    TRUE
} bool_t;

// i don't think we will need this
#define     NOT_VALID_MOVE  -10

#define     BOARD_WIDTH     8
#define     BOARD_HEIGHT    8

/**
 * position_t - 
 * @x: 
 * @y: 
 */
typedef struct
{
    int     x;
    int     y;
} position_t;

/**
 * moves_list_t - a list of moves
 * @position_t: pointer to the list of moves.
 * @size: number of moves.
 */

typedef struct
{
    position_t      *moves;
    int             size;
} moves_list_t;


/**
 * board_t - the chess board.
 * TODO: search why this way didn't work!!!
 */
typedef int board_t[BOARD_WIDTH][BOARD_HEIGHT];


/*
typedef struct
{
    int board[BOARD_WIDTH][BOARD_HEIGHT];
} board_t;
*/

/************************************************
 *
 * FUNCTIONS ARE DEFINED BELOW
 *
 * **********************************************/

void print_board(board_t board);
int make_a_tour(board_t b, position_t k);
position_t change_knight_position(position_t position);








#endif // KNIGHT_HEADER_H
