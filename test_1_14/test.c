#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//
//
//	return 0;
//}
//
int main()
{
	int line = 0;
	printf("�����ѧ\n");
	while (line<22)
	{
		printf("��һ�д���:%d\n",line);
		line++;
	}
	if (line >= 20000)
		printf("��������\n");
	return 0;
}