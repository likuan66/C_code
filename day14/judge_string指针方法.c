/*判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0. */
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#pragma warning(disable:4996)
void left_move(char *str, int k)
{
	while (k != 0)
	{
		char *cur = str;
		char tmp = *cur;
		while ((*(cur + 1)) != '\0')
		{
			*cur = *(cur + 1);
			cur++;
		}
		*(cur) = tmp;
		k--;
	}
}
int Judge_string(char *str, const char *p)//判断函数
{
	int i;
	if (strlen(str) != strlen(p))
	{
		return 0;
	}
	for (i = 1; i <= strlen(str); i++)
	{
		left_move(str, 1);
		if (strcmp(str, p) == 0)//strcmp函数判断str字符串是否与p字符串相同
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[] = "abcd";
	char str2[] = "cdab";
	printf("%d\n", Judge_string(str1, str2));

	system("pause");
	return 0;
}