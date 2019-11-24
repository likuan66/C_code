//Ä£ÄâÊµÏÖstrcpy¡£
#include<stdio.h>
#include<Windows.h>
#include<assert.h>
char *Mystrcpy(char *str1, const char *str2)
{
	char *ret = str1;
	assert(str1 != NULL);
	assert(str2 != NULL);
	while ((*str1++ = *str2++)!='\0')
	{
		;
	}
	return ret;
}
int main()
{
	char a[] = "abcdefg";
	char b[50] = { 0 };
	printf("%s\n", Mystrcpy(b, a));

	system("pause");
	return 0;
}