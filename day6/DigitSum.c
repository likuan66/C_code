#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int DigitSum(int n)
{
	if (n < 10)
	{
		return n;
	}
	else
	{
		return n%10+DigitSum(n  / 10);
	}
}
int main()
{
	int n;
	printf("������һ���Ǹ�������\n");
	scanf("%d", &n);
	int sum = DigitSum(n);
	printf("%d\n", sum);
	system("pause");
	return 0;
}