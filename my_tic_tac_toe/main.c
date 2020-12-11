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
    /* initialize board */
    initBoard();
    
    /* ask user if they want to go first */
    int choice;
    char user = 'X'; /* assume user wants to go first, hence 'X' */
    char computer = 'O';

    choice = userFirst(); /* 1 if yes, 0 if no*/

    if (choice == 0) {
        computer = 'X';
        user = '0';
    }

    /* display intial positions on board */
    drawBoard();
    
    /* play game */

    /* ask to play again */
    return(0);
}
