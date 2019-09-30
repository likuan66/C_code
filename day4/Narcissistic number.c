#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 0;
	int ge = 0;
	int shi = 0;
	int bai = 0;
	for (i = 1; i <= 999; i++)
	{
		bai = i / 100;
		shi = i / 10 % 10;
		ge = i  % 10;
		if (ge*ge*ge + shi*shi*shi + bai*bai*bai == i)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
}