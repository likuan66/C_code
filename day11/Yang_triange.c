/*在屏幕上打印杨辉三角。
1
1 1
1 2 1
1 3 3 1*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int m;
	printf("请输入要打印几行：\n");
	scanf("%d", &m);
	int i, j, a[100][100];
	for (i = 1; i <= m; i++)
	{
			a[i][1] = 1;
			a[i][i] = 1;
	
	}
	for (i = 3; i <= m; i++)
	{
		for (j = 2; j <= i-1; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 1; i <= m; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	system("pause");
	return 0;
}