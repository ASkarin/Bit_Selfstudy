#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int jumpf(int i)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (i > 2)
	{
		c = a + b;
		a = b;
		b = c;
		i--;
	}
	return c;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = jumpf(n);
	printf("%d\n", ret);
	return 0;
}