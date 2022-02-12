#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int a = (int)10.9;
//	int b = ++a;
//	printf("b=%d\n", b);
//	printf("a=%d\n", !a);
//	return 0;
//}


//#define MAX(X,Y) (X>Y?X:Y)
////int Max(int x, int y)
////{
////	if (x > y)
////		return x;
////	else
////		return y;
////
////}
//int main()
//{
//	int num1 = 19;
//	int num2 = 34;
//	int c = MAX(num1, num2);
//	printf("c=%d\n", c);
//	return 0;
//}
//int main()
//{
//	char st[] = { 'a','b','c','\0'};
//	printf("%d\n",strlen(st));
//	return 0;
//}
//int main()
//{
//	printf("%s\n", "0");
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	float pup = 9.89;
//	float* sp = &pup;
//	*sp += !3;
//	printf("%f\n", pup);
//	//printf("%p\n", sp);
//	//printf("%p\n", &pup);
//	/*printf("%d\n", sizeof(sp));*/
//	return 0;
//}
//struct boy
//{
//	float height;
//	float weight;
//};
//int main()
//{
//	struct boy CYZ = { 1.83,78.5 };
//	printf("Éí¸ß£º%fÃ×\n", CYZ.height);
//	CYZ.height = 1.71;
//	struct boy* sp = &CYZ;
//	printf("%f\n", sp->weight);
//	return 0;
//}
int main()
{
	int a = 1;
	int Y = 0;
		while (a <= 100)
		{
			Y = a % 2;
			if (1==Y)
				printf("%d ", a);
			a++;
	}
	return 0;
}