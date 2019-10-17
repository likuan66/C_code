#include<stdio.h>
#include<Windows.h>


int main()
{
	int ch ;
	printf("please input char:\n");
	while ((ch = getchar() )!= EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch - 32);
		}
		else if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}
		else if (ch >= '0'&&ch <= '9')
			;
		else
			;
	}
	system("pause");
	return 0;
}
