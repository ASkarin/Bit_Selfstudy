#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	if (a < b)
//	{
//		int tmp = a;
//			a = b;
//			b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		    a = c;
//		    c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (0 == (i % 3))
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	i = (a < b ? a : b);
//	for (i; i; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 0,5,8,9,7,11,4,2,6,21 };
//	int max = arr[0];
//	for (i = 1;i<10;i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int s = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (s = 1; s < 10; s++)
//		{
//			printf("%d*%d=%d ",i,s, i * s);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,3,4,5,6,7,8,9,11 };
//	int i = 0;
//	int left =0;
//	int mid = 0;
//	int right = (sizeof(arr)/sizeof(arr[0]))-1;
//	mid = (left + right) / 2;
//	scanf("%d", &i);
//	while (left <= right)
//	{
//		if (i > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//		mid = (left + right) / 2;
//		if (i == arr[mid])
//		{
//			printf("找到了，下标是%d", mid);
//			break;
//		}
//	}
//		if (i!=arr[mid])
//		{
//			printf("sorry,找不到该数\n");
//		}
//	
//	return 0;
//}
