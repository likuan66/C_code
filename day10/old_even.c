//获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列。
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void Old_even(int m)
{
	int i,j;
	printf("偶数位是：\n");
	for (i = 31; i >= 1; i-= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("奇数位是：\n");
	for ( j= 30;  j>= 0; j-= 2)
	{
		printf("%d ", (m >> j) & 1);
	}
}
int main()
{
	int m;
	printf("请输入一位整数：\n");
	scanf("%d", &m);
	Old_even(m);

	system("pause");
	return 0;
}