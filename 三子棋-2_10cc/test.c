#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("*********** 1.play ***********\n");
	printf("*********** 0.exit ***********\n");
	printf("******************************\n");
}

void game()
{
	int ret = 0;
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = { 0 };
	Initboard(board,ROW,COL);
	Displayboard(board,ROW,COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		ret = IsWin(board, ROW, COL); 
		if (ret != 'C')
		{
			break;
		}
	}
	switch (ret)
	{
	case '*':
		printf("游戏胜利\n");
		break;
	case '#':
		printf("游戏失败\n");
		break;
	case 'Q':
		printf("游戏平局\n");
		break;
	}
}

void test()
{
	int input = 0;
	do
	{
		menu();
		printf("欢迎来到三子棋游戏，请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("选择非法\n");
			break;
		}
	} while (input);
}


int main()
{
	test();
	return 0;
}