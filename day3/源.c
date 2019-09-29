#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	double sum1 = 0;
	double sum2 = 0;
	for (i = 1; i <= 100; i+=2)//奇数和
	{
		sum1 += 1.0 / i;
	}
	for (i = 2; i <= 100; i += 2)//偶数和
	{
		sum2 += 1.0 / i;
	}
	printf("%f ", sum1 - sum2);
	system("pause");
	return 0;
}