/*
 * main.c
 */

#include <stdio.h>

#include "ticTacToe.h"

void initBoard(void);
void drawBoard(void);
int userFirst(void);

char board[BOARD_SIZE][BOARD_SIZE];

int main()
{
    initBoard();
    drawBoard();
    userFirst();
    return(0);
}
