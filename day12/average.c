//不使用（a + b） / 2这种方式，求两个数的平均值。
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
	return (m - n) / 2 + n;  //或者(m&n)+((a^b)>>1)但必须要是整型
}
int main()
{
	double a, b;
	scanf("%lf%lf", &a, &b);
	printf("%lf\n", average(a, b));
	system("pause");
	return 0;
}