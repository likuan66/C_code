//��ȡһ�������������������е�ż��λ������λ�� �ֱ�������������С�
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void Old_even(int m)
{
	int i,j;
	printf("ż��λ�ǣ�\n");
	for (i = 31; i >= 1; i-= 2)
	{
		printf("%d ", (m >> i) & 1);
	}
	printf("\n");
	printf("����λ�ǣ�\n");
	for ( j= 30;  j>= 0; j-= 2)
	{
		printf("%d ", (m >> j) & 1);
	}
}
int main()
{
	int m;
	printf("������һλ������\n");
	scanf("%d", &m);
	Old_even(m);

	system("pause");
	return 0;
}