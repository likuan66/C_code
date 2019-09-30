#include <stdio.h>
#include <windows.h>
int main(void)
{
	int ch;
	int counter = 0;
	while ((ch = getchar()) != EOF && ch != '\n')
	{
		if ('{' == ch)
		{
			counter++;
		}
		else if ('}' == ch)
		{
			counter--;
		}
		if (counter < 0)
		{
			printf("input error\n");

			return -1;
		}
	}
	if (0 == counter)
	{
		printf("success!\n");
	}
	else
	{
		printf("failed!\n");
	}
	system("pause");
	return 0;
}
