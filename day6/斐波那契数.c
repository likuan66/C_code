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
		for (int i = 0; i < n - 2; i++)//ѭ�����޵�ȷ�����������5��쳲���������Ҫ����3���ۼӣ����Դ���n-2�Ĺ�ϵ
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
	printf("������Ҫ��ĵڶ��ٸ�쳲���������");
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}
