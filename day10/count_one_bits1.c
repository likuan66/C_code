//дһ���������ز����������� 1 �ĸ��� 
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
	printf("������һλ������\n");
	scanf("%d", &m);
	printf("%d\n", count_one_bits(m));
	system("pause");
	return 0;
}