#include "knight.h"

/**
 * main - printing one try for a knight tour.
 *
 * Return: always 0, 1 on error.
 */

int main(void)
{
        board_t board = {0};
        position_t knight_p = {
                .x = 0,
                .y = 0
        };
        int number_of_tour;


        // return size of the tour
        number_of_tour = make_a_tour(board, knight_p);
        print_board(board);

        return (0);
}
