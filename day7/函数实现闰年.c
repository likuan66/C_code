#include<stdio.h>
#include<Windows.h>

#pragma warning(disable:4996)
void leap(int year)
{
	if (0 == year % 4 && year % 100 != 0 || 0 == year % 400)
	{
		printf("%d������:\n", year);
	}
	else
	{
		printf("%d��������:\n", year);
	}
}
int main()
{
	int year;
	printf("������һ�����:\n");
	scanf("%d", &year);
	leap(year);

	system("pause");
	return 0;
}