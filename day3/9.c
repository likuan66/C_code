#include<stdio.h>
#include<Windows.h>
int main()
{
	int i = 0;
	int count1 = 0;
	int count2 = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count1++;
		}
		if (i / 10 == 9)
		{
			count2++;
		}
	
	}
	printf("%d ", count1 + count2);
	system("pause");
	return 0;
}