#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <stdlib.h>

int main()
{
	int a, b;

	printf("请输入要求公约数的两个数：");

	scanf("%d %d", &a, &b)

	if (a < b)

	{ 
		a = a^b;

		b = a^b;

		a = a^b;
	}

	while (a%b != 0)
	{

	int temp = a%b;
		a = b;
		b = temp;
	}
	printf("最大公约数为：%d\n", b);
	system("pause");
	return 0;
}
