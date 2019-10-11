#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int power(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*power(n, k - 1);
	}
}
int main()
{
	int n ;
	int k ;
	printf("请输入两位整数：\n");
	scanf("%d %d", &n, &k);
	int rit = power(n, k);
	printf("%d", rit);
	system("pause");
	return 0;
}