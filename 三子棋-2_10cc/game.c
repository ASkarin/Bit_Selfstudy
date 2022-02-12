#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < ROW - 1)
		{
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
	printf("\n");
}



void PlayerMove(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	int flag = 0;
	do
	{
		printf("请输入下棋坐标:>");
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= ROW && j >= 1 && j <= COL)
		{
			if (board[i - 1][j - 1] == ' ')
			{
				board[i - 1][j - 1] = '*';
				flag = 0;
			}
		}
		else
		{
			printf("输入非法，请重新输入\n");
			flag = 1;
		}
	} while (flag);
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("电脑下...\n\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

 int IsFull(char board[ROW][COL])
{
	int i = 0;
	for (i = 0; i < ROW; i++)
	{
		int j = 0;
		for (j = 0; j < COL; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&& board[i][1] !=' ')
		{
			return board[i][0];
		}
	}
	for ( i = 0; i < col; i++)
	{
		if (board[2][i] == board[1][i]&& board[1][i] == board[0][i]&& board[0][i] !=' ')
		{
			return board[0][i];
		}
	}
	if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]&& board[1][1] !=' ') || (board[2][0] == board[1][1]&& board[1][1] == board[0][2]&&board[1][1] !=' '))
	{
		return board[1][1];
	}
	if (IsFull(board))
	{
		return 'Q';
	}
	return 'C';
}

