/*
 *	ticTacToe.h
 */

#ifndef TICTACTOE_H
#define TICTACTOE_H

#define BOARD_SIZE 3

/*Note: define board in your main.c */
char board[BOARD_SIZE][BOARD_SIZE];

/* Create the board; make sure it starts off empty */
void initBoard(void);

/* Dislay the board to STDOUT */
void drawBoard(void);

/*endif of TICTACTOE_H */
#endif
