#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int i,j,k,n;
	scanf("%d", &n);
	//���ε�������
		for (i = 1; i <= n; i++)
		{

			for (j = n - 1; j >= i; j--)
			{
				printf(" ");
			}
			for (k = 1; k <= 2 * i - 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
		//���ε�������
		for (i = n - 1; i >= 1; i--)
		{
			for (j = i; j <= n - 1; j++)
			{
				printf(" ");
			}
			for (k = 1; k <= 2 * i - 1; k++)
			{
				printf("*");
			}
			printf("\n");
		}
	system("pause");
	return 0;
}