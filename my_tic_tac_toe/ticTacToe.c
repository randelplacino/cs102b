/*
 *	ticTacToe.c
 */
#include <stdio.h>
#include "ticTacToe.h"

/* Create the board; make sure it starts off empty */
void initBoard(void)
{
	int row;
	int col;
	
	for (row=0; row < BOARD_SIZE; row++)
	{
		for (col=0; col < BOARD_SIZE; col++)
		{
			board[row][col] = ' ';
		}
	}
}

/* Display the board to STDOUT */
void drawBoard(void)
{
	int row;

	printf("\n");
	for (row=0; row < BOARD_SIZE; row++)
	{
		printf("   *   *   \n");
		printf(" %c * %c * %c \n",
			board[row][0], board[row][1], board[row][2]);
		printf("   *   *   \n");
		if (row != 2)
		{
			printf("************\n");
		}
	}
	printf("\n");
	return;
}

/* Ask if user wants to go first */
/* Returns 1 if yes, 0 if no     */
int userFirst(void)
{
    char response;

    printf("Do you want to go first? (y/n) ");
    do
    {
        response = getchar();
    } while ((response != 'y') && (response != 'Y') && (response != 'n') && (response != 'N'));
    if ((response == 'y')||(response == 'Y'))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

/* PLay game; return winner as char */
char playGame(void)
{
    int turn;

    for (turn = 1; turn <= 9; turn++)
    {
        /* Check if turn is even or odd
         * to determine which player should move */
        if turn (turn % 2 == 1)
        {
            if (computer = 'X')
            {
                computerMove();
            } else {
                playerMove();
            }
        } else
        {
            if (computer = 'O')
            {
                computerMove();
            } else {
                playerMove();
            }
        }

        drawBoard()
    
        if (symbolWon(computer))
        {
            printf("\nI, the computer, win!\n");
            return(computer);
        } else
        {
            printf("\nYou, the human, win!\n");
            return(user);
        }
    }
    printf("\nThe game has ended in a draw\n");
}

/* Check if the given symbol has already won the game */
int symbolWon(char symbol)
{
    int row = 0;
    int col;

    for (row = 0; row < BOARD_SIZE; row++)
    {
        if (board[row][0] == symbol) &&
            (board[row][1] == symbol) &&
            (board[row][2] == symbol)
        {
            return(1);
        }
    }

    for (col = 0; col < BOARD_SIZE; row++)
    {
        if (board[0][col] == symbol) &&
            (board[1][col] == symbol) &&
            (board[2][col] == symbol)
        {
            return(1);
        }
    }

    if (board[0][0] == symbol) &&
        (board[1][1] == symbol) &&
        (board[2][2] == symbol)
    {
        return(1);
    }

    if (board[0][2] == symbol) &&
        (board[1][1] == symbol) &&
        (board[0][2] == symbol)
    {
        return(1);
    }
}


/* Find a win, if any, for a given symbol
 * If a winning square exsits, return the square
 * otherwise, return 0 */

int findWin(char symbol)
{
    int square;
    int row, col;
    int result = 0;

    /*
     * Loop through the board over 9 squares
     * For each, if it is empty, fill it in with the given symbol
     * then check if this has resulted in a win
     * If so, keep track of this square in a result variable
     * Either way, reset the square to empty afterwards
     * After the loop, if one or more wins have been found 
     * the last will be recorded in the result
     * Otherwise, result will still be 0 */

    for (square = 1; square <= 9; square++)
    {
        row = (square-1) / 3;
        row = (square-1) % 3;

        if (board[row][col] == ' ')
        {
            board[row][col] = symbol;
            if symbolWon(symbol)
            {
                result = square;
                board[row][col] = ' ';
            }
        }
    }
    return(result);
}

/* Return the number of an empty corner, if one exists.
 * otherwise, return 0 */

void findCorner(void)
{
    if (board[0][0] == ' ')
    {
        return(1);
    }
    if (board[2][0] == ' ')
    {
        return(3);
    }
    if (board[0][2] == ' ')
    {
        return(7);
    }
    if (board[2][2] == ' ')
    {
        return(9);
    }
    return(0);
}

/* Return the number of an empty side square, if one exists'
 * otherwise return 0 */

void findSide(void)
{
    if (board[0][1] == ' ')
    {
        return(2);
    }
    if (board[1][0] == ' ')
    {
        return(4);
    }
    if (board[1][2] == ' ')
    {
        return(6);
    }
    if (board[2][1] == ' ')
    {
        return(8)
    }
    return(0);
}


/* If middle square is emtpy/open, return 5;
 * otherwise, return 0 */

void middleOpen(void)
{
    if (board[1][1] == ' ')
    {
        return(5);
    } else
    {
        return(0);
    }
}

void computerMove(void)
{
    int square;
    int row, col;

    /* user first strategy rule returns valid square */
    square = find_win(computer);
    if (!square)
    {
        square = findWin(user);
    }
    if (!square)
    {
        square = middleOpen();
    if (!square)
    {
        square = findCorner();
    }
    if (!square)
    {
        square = findSide();
    }

    printf("\nI choose square %d!\n");

}

void playerMove(void)
{
    int square;
    int row, col;

    do {
        printf("Enter a square: \n");
    } while (!square_valid(square)); /* check if given square is valid and empty */
    
    row = (square-1) / 3;
    col = (square-1) % 3;

    board[row][col] = user;
}

/* check if the given square is valid and empty */
int square_valid(int square)
{
    int row, col;
    row = (square-1) / 3;
    col = (square-1) % 3;

    if ((square >= 1) && <square <= 9)
    {
        if (board[row][col] == ' ') /* check if the cell is a space character */
        {
            return(1);
        }

    }
}
