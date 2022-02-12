#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
////void game()
////{
////	RAND_MAX
////}
////辗转相除法
//
//
////int main()
////{
////    int a = 0;
////    int b = 0;
////    int r = 0;
////    scanf("%d%d", &a, &b);
////    if (a < b)
////    {
////        int tmp = a;
////            a = b;
////            b = tmp;
////    }
////    while (r=a%b)
////    {
////        a = b;
////        b = r;
////    }
////    printf("a和b的最大公约数是%d\n", b);
////    return 0;
////}
//
////int main()
////{
////	int count = 0;
////	int i = 0;
////	for (i = 11; i <= 200; i++)
////	{
////		int j = (i % 2) * (i % 3) * (i % 5) * (i % 7);
////		if (j != 0)
////		{
////			count++;
////			printf("%d ", i);
////		}
////
////	}
////	printf("\n素数有%d个",count);
////	return 0;
////}
////int main()
////{
////	int i = 0;
////	int j = 0;
////	for (i = 1; i <= 9; i++)
////	{
////		for (j = 1; j <= i; j++)
////		{
////			printf("%d*%d=%-2d ", i, j, i * j);
////		}
////		printf("\n");
////	}
////	return 0;
////}

void menu()
{
	printf("\n****************************\n");
	printf("**** 1:play.**** 0.exit.****\n");
	printf("****************************\n");
}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("\n请猜数字:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入无效\n");
				break;
		}
	} while (input);
	return 0;
}
