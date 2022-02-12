#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
int main()
{
	char arr1[] = "Here is myscret tree";
	char arr2[] = "####################";
	int left = 0;
	//int r = sizeof(arr1) / sizeof(arr1[0])-2;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		if (left == 0)
		{
			printf("%s\n", arr2);
			Sleep(500);
	     }
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		system("cls");
		printf("%s\n", arr2);
			Sleep(500);
			left++;
			right--;
	}
	return 0;
}