/*���ʵ�֣� 
����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ��
�������� :
1999 2299
������� : 7*/
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
	printf("��������λ������\n");
	scanf("%d%d", &m, &n);
	printf("%d\n", differ_bits(m, n));
	system("pause");
	return 0;
}