//ģ��ʵ��strcat��
#include<stdio.h>
#include<Windows.h>
#include<assert.h>

char *Mystrcat(char *str1, char *str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	char *p = str1;
	while (*str1 != '\0')
	{
		str1++;
	}
	while (*str1++ = *str2++)
	{
		;
	}
	return p;
}
int main()
{
	char a[40] = "abcdefg";
	char b[20] = "hijklmn";
	printf("%s\n", Mystrcat(a, b));

	system("pause");
	return 0;
}