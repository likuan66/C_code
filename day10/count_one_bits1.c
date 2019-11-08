//写一个函数返回参数二进制中 1 的个数 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int count_one_bits(int m)
{
	int count = 0;
	while (m > 0)
	{
		if (m % 2)
		{
			count++;
		}
		m /= 2;
	}

	return count;
}
int main()
{
	int m;
	printf("请输入一位整数：\n");
	scanf("%d", &m);
	printf("%d\n", count_one_bits(m));
	system("pause");
	return 0;
}