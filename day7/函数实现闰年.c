#include<stdio.h>
#include<Windows.h>

#pragma warning(disable:4996)
void leap(int year)
{
	if (0 == year % 4 && year % 100 != 0 || 0 == year % 400)
	{
		printf("%d是闰年:\n", year);
	}
	else
	{
		printf("%d不是闰年:\n", year);
	}
}
int main()
{
	int year;
	printf("请输入一个年份:\n");
	scanf("%d", &year);
	leap(year);

	system("pause");
	return 0;
}