//���һ��������ÿһλ�� 
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void print_every_one(int m)
{
	while (m > 0)
	{
		if (m < 10)
		{
			printf("%d\n", m);
			break;
		}
		else
		{
			printf("%d ", m % 10);
			m /= 10;
		}
	}
}
int main()
{
	int m;
	printf("������һλ������\n");
	scanf("%d", &m);
	print_every_one(m);
	system("pause");
	return 0;
}