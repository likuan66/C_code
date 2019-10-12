#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
void every(int m)
{

	if (m > 9)
	{
		every(m / 10);
	}
	printf("%d\n", m % 10);
}
int main()
{
	int m;
	printf("请输入一位整数:\n");
	scanf("%d", &m);
	every(m);
	system("pause");
	return 0;
}