#define _CRT_SECURE_NO_WARNINGS
//int conf[HEIGHT]; /* Element conf[d] gives the current position of disk d. */
//
//void move(int d, int t) {
//    /* move disk d to peg t */
//    conf[d] = t;
//}
//
//void hanoi(int h, int t) {
//    if (h > 0)
//    {
//        int f = conf[h - 1];
//        if (f != t) 
//        {
//            int r = 3 - f - t;
//            hanoi(h - 1, r);
//            move(h - 1, t);
//        }
//        hanoi(h - 1, t);
//    }
//}
#include<stdio.h>
int count = 0;
void move(int x, int y)
{
	printf("%c->%c\n", x, y);
	count++;
}
void hanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		move(a, c);
	}
	else
	{
		hanoi(n - 1, a, c, b);//将A座上的n-1个盘子借助C座移向B座
		move(a, c);//将A座上最后一个盘子移向C座
		hanoi(n - 1, b, a, c);//将B座上的n-1个盘子借助A座移向C座
	}
}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hanoi(n, 'A', 'B', 'C');
//	printf("\n至少移动%d次\n", count);
//	return 0;
//}