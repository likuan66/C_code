//��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
double average(double m, double n)
{
	if (m < n)
	{
		double temp = m;
		m = n;
		n = temp;
	}
	return (m - n) / 2 + n;  //����(m&n)+((a^b)>>1)������Ҫ������
}
int main()
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%lf\n", average(a, b));
	system("pause");
	return 0;
}