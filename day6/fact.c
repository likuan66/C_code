#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int fact(int n)
{
	int sum = 1;
	for (n; n > 0; n--)
	{
		sum *= n;
	}
	return sum;
}
int main()
{
	int n;
	printf("������һλ������\n");
	scanf("%d", &n);
	printf("%d", fact(n));
	system("pause");
	return 0;
}