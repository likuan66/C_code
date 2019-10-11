#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		for (int i = 0; i < n - 2; i++)//循环上限的确定，例如求第5个斐波那契数就要进行3次累加，所以存在n-2的关系
		{
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
}
int main()
{
	int n = 0;
	printf("请输入要求的第多少个斐波那契数：");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
