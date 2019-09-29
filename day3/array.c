#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int a[5], b[5];
	int i, j, t;
	for (i = 0; i < 5; i++)          //给两个数组赋值
		scanf("%d", &a[i]);
	for (j = 0; j < 5; j++)
		scanf("%d", &b[j]);
	for (i = 0; i < 5; i++)            //建立中间变量交换两个数组的数值
	{
		t = a[i];
		a[i] = b[i];
		b[i] = t;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", b[i]);
	}
	system("pause");
	return 0;
}
