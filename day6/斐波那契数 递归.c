#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return fib(n - 1) + fib(n - 2);
	}
}
int main()
{
	int n = 0;
	printf("������Ҫ��ĵڶ��ٸ�쳲�������:\n");
	scanf("%d", &n);
	int rit = fib(n);
	printf("%d\n", rit);
	system("pause");
	return 0;
}