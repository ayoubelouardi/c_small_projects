# Knight’s Tour problem

## Goal:
-> Find the solution for the knight tour.
--> make 1 tour.

--> make multiple tours.
--> adjust the params.
--> solve the problem.


## define terms:
- position\_t (x, y): (int, int): (0 <= 7)(0 <= 7).
    This is a position that points to a cell in the chess board.
    Could be also a move, or the current position of the knight or anything related to
    the board really.
- moves\_list\_t {position\_t[], size} 
    This is a list of possible moves for the night, a move is basically a position that 
    the knight 'may' go into. they must be *valid* moves.
    And the size is the number of moves in the array.
- board\_t (8x8 (int)): (0 <= 64)
    This is the board, and it's an 8 by 8 2D array of type int.
    Each cell has a number that indicate how many moves did the knight take to get to
    this cell. if 0 then he still didn't get there.


## project strcture 

knight.h: header
knight.c: functions
main.c: main program
