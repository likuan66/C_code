#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int fact(int n)
{
	if (n == 1)
	{
		return n;
	}
	else
	{
		return n*fact(n - 1);
	}
}
int main()
{
	int n;
	printf("������һλ������\n");
	scanf("%d", &n);
	printf("%d", fact(n));
	system("pause");
	return 0;
}