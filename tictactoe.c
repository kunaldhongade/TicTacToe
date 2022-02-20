/*
	*************Tic tac Toe*************

	# objective for this program

	1. learn some basics of c language 
	2. applying c concepts practicaly
	
	# About this program

	1. This is simple command line based game popular between childs
	2. In this program we use simple and understandable clean code
*/
#include<stdio.h>
#include<conio.h>
#include<Windows.h>
#include<stdlib.h>
#include<MMSystem.h>


char square[10] = {'0','1','2','3','4','5','6','7','8','9'};	//for create square in numbers
int checkWin();	//to check winner or not
void drawBoard();	//draw board on screen

int main()
{
	int player = 1;	// player track how many player
	int i;			// to keep track of progress game
	int choice;		// take choice in which position user want to place mark
	char mark;		// X, O mark
	printf("\nWelcome, we are greatfull to see you here !!!\n");
	printf("This game was created by @kunaldhongade");
	do {
		drawBoard();
		player = (player % 2) ? 1 : 2;

		printf("Player %d, Enter the Choice : ", player);
		scanf("%d", &choice);

		mark = (player == 1) ? 'X' : 'O';
		
		// Use if else ladder to check choice enter by user
		// where user want to choose put value

		if (choice == 1 && square[1] == '1')
		{
			square[1] = mark;	
		}
		else if (choice == 2 && square[2] == '2')
		{
			square[2] = mark;
		}
		else if (choice == 3 && square[3] == '3')
		{
			square[3] = mark;
		}
		else if (choice == 4 && square[4] == '4')
		{
			square[4] = mark;
		}
		else if (choice == 5 && square[5] == '5')
		{
			square[5] = mark;
		}
		else if (choice == 6 && square[6] == '6')
		{
			square[6] = mark;
		}
		else if (choice == 7 && square[7] == '7')
		{
			square[7] = mark;
		}
		else if (choice == 8 && square[8] == '8')
		{
			square[8] = mark;
		}
		else if (choice == 9 && square[9] == '9')
		{
			square[9] = mark;
		}
		else if(choice == 0) // 0 for exit game
		{
			exit(1);
		}
		else
		{
			printf(" Invalid option !!!"); // if user inter other than 1 - 9 value
				player --;
				continue;
			getch();
		}

		i = checkWin(); // calling checkwin function to check who is winner
		player++;

	} while (i == -1);

	drawBoard();
	
	if (i == 1)
	{
		printf("==> Player %d Won", --player); 
	}
	else
	{
		printf("==> Game draw / Over");

	}
	getch();
	return 0;
}

int checkWin()
{
	if (square[1] == square[2] && square[2] == square[3]) //checking which line is same like (X x x) or (O O O) horizontaly / vertically / Diagonaly
	{
		return 1;
	}
	else if (square[4] == square[5] && square[5] == square[6])
	{
		return 1;
	}
	else if (square[7] == square[8] && square[8] == square[9])
	{
		return 1;
	}
	else if (square[1] == square[4] && square[4] == square[7])
	{
		return 1;
	}
	else if (square[2] == square[5] && square[5] == square[8])
	{
		return 1;
	}
	else if (square[3] == square[6] && square[6] == square[9])
	{
		return 1;
	}
	else if (square[1] == square[5] && square[5] == square[9])
	{
		return 1;
	}
	else if (square[3] == square[5] && square[5] == square[7])
	{
		return 1;
	}
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    {
	return 0;
	}
	else
		return -1;
}
/* use this kind of output
					_________________________
					|       |       |       |
					|    1  |   2   |   3   |
					|_______|_______|_______|
					|       |       |       |
					|    4  |   5   |   6   |
					|_______|_______|_______|
					|       |       |       |
					|    7  |   8   |   9   |
					|_______|_______|_______|

		*/
void drawBoard()
{
	printf("\n\n****************Tic Tac Toe*********************\n\n");
	printf("Player 1 ( X ) - Player 2 ( O ) \n\n\n");
	printf("_________________________\n");
	printf("|       |       |       |\n");
	printf("|   %c   |   %c   |   %c   |\n", square[1], square[2], square[3]);
	printf("|_______|_______|_______|\n");
	printf("|       |       |       |\n");
	printf("|   %c   |   %c   |   %c   |\n", square[4], square[5], square[6]);
	printf("|_______|_______|_______|\n");
	printf("|       |       |       |\n");
	printf("|   %c   |   %c   |   %c   |\n", square[7], square[8], square[9]);
	printf("|_______|_______|_______|\n\n");
	
}
