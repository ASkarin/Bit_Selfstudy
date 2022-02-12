#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//1.º∆À„n!
int main()
{
	int i = 0;
	long long int a = 1;
	long long int b = 0;
	int n = 0;
	scanf("%d", &n);
	for (i = 1; i <=n; i++)
	{
		a*= i;
		b += a;
	}
	printf("1+2!+3!+...+%d!=%lld",(i-1),b);
	return 0;
}
