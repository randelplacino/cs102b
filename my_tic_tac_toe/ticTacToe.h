/*
 *	ticTacToe.h
 */

#ifndef TICTACTOE_H
#define TICTACTOE_H

#define BOARD_SIZE 3

/*Note: define board in your main.c */
char board[BOARD_SIZE][BOARD_SIZE];
char user;
char computer;

/* Create the board; make sure it starts off empty */
void initBoard(void);

/* Dislay the board to STDOUT */
void drawBoard(void);

/* Ask if user wants to go first.
 * Returns 1 if yes, 0 if no */
int userFirst(void);

/* Play game; return winner as char */
char playGame(void);

int symbolWon(char);
int findWin(char);
int middleOpen(void);
int findCorner(void);
int findSide(void);
void computerMove(void);
int squareValid(int);
void playerMove(void);

/*endif of TICTACTOE_H */
#endif
