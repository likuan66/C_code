/*实现一个函数，可以左旋字符串中的k个字符。 
ABCD左旋一个字符得到BCDA 
ABCD左旋两个字符得到CDAB */
#include<stdio.h>
#include<Windows.h>
#include<assert.h>
#pragma warning(disable:4996)
void turn(char s[], int n)
{
	int len = strlen(s);
	int i;
	assert(s);
	while (n--)
	{
		char temp = s[0];
		for (i = 0; i < len - 1; i++)
		{
			s[i] = s[i + 1];
		}
		s[len - 1] = temp;;
	}
}
int main()
{
	int m;
	scanf("%d", &m);
	char str[] = "ABCD";
	printf("左旋前：%s", str);
	printf("\n");
	turn(str,m );
	printf("左旋后：%s", str);
	printf("\n");
	system("pause");
	return 0;
}