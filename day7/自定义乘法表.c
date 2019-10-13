#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int main()
{
	int n = 0;
	printf("请输入一个整数：\n");
	scanf("%d", &n);
	int i, j = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%2d*%2d=%3d ", j, i, j*i);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}