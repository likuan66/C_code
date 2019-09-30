#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int a,i;
	int sum = 0;
	int temp = 0;
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		temp = temp * 10 + a;
		sum += temp;
	}
	printf("%d", sum);

	system("pause");
	return 0;
}