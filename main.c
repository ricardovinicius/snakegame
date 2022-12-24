#include <stdio.h>

// defines the board size
#define height 17
#define width 17

// initialize the board
int board[height][width] = {};

// print the board
void print_board(int board[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            printf("%d", board[i][j]);
        }
    }
}


int main(void)
{
    print_board(board);
}

// TODO: CREATE THE BOARD OF THE GAME

// TODO: CREATE THE SNAKE

// TODO: CREATE THE SNAKE MOVEMENT

// TODO: CREATE MORE ADVANCED SNAKE MOVES (PASSTHROUGH THE WALL)

// TODO: CREATE THE SNAKE DEATH CONDITION

// TODO: CREATE THE FRUITS MECHANICS

// TODO: CREATE THE POINTS SYSTEM

