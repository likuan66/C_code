/*编程实现： 
两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？
输入例子 :
1999 2299
输出例子 : 7*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int differ_bits(int m, int n)
{
	int count = 0;
	int ret = m^n;
	while (ret)
	{
		ret = ret&(ret - 1);
		count++;
	}
	return count;
}
int main()
{
	int m, n;
	printf("请输入两位整数：\n");
	scanf("%d%d", &m, &n);
	printf("%d\n", differ_bits(m, n));
	system("pause");
	return 0;
}