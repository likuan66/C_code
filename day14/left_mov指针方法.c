#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)

void turn(char *s, int n)
{
	char temp = 0;
	char *str = s;
	assert(s);
	while (n--)
	{
		temp = *s;
		str = s;
		while (*(str + 1) != '\0')
		{
			*str = *(str + 1);
			str++;
		}
		*str = temp;
	}
}
int main()
{
	int m;
	scanf("%d", &m);
	char str[] = "ABCD";
	printf("×óĞıÇ°£º%s", str);
	turn(str, m);
	printf("×óĞıºó£º%s", str);
	system("pause");
	return 0;
}