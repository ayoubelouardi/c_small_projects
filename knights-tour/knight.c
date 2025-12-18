#include "knight.h"


/**
 * print_board - print a board.
 * @b: the board to be printed.
 * Description: printing the chess board state to the stdout.
 */
void print_board(board_t b)
{
        int i, j;

        for (i = 0; i < BOARD_WIDTH; i++)
        {
                for (j = 0; j < BOARD_HEIGHT; j++)
                {
                        printf("%2d ", b[i][j]);
                }
                puts("");
        }
}

/**
 * make_a_tour - make a knight tour.
 *
 * Description:
 * 1- generate the moves.
 * 2- choose the random move.
 * 3- repeat this until we have no valid move.
 *
 * @b: the board to play the tour on it.
 * @k: the knight initial position.
 * Return:
 */
int make_a_tour(board_t b, position_t k)
{
        int turns_n = 1;
        moves_list_t list;

        do
        {
                board[k.x][k.y] = turns_n;

                // generate and choose next move
                list = generate_the_moves(b, k);
                position_t move = choose_random_move(list);
                if (!(list.size > 0))
                {
                        return (turns_n);
                }

                // change knight position
                k = move;
                turns_n++;
        }
        while (turns_n <= 64);

        return (turns_n);
}
