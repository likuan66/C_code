#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)
int main()
{
	int a[5], b[5];
	int i, j, t;
	for (i = 0; i < 5; i++)          //���������鸳ֵ
		scanf("%d", &a[i]);
	for (j = 0; j < 5; j++)
		scanf("%d", &b[j]);
	for (i = 0; i < 5; i++)            //�����м�������������������ֵ
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
