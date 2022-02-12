#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[3][4] = { {1,2},{4,5} };
//	return 0;
//}
#include<stdio.h>
void bubble_sortu(int arr[],int sz)
{
	int i = 0;
	for (i; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j; j < sz - 1 -i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}
int main()
{
	int i = 0;
	int arr[] = { 9,7,3,4,5,8,6,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sortu(arr,sz);
	for (i; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}