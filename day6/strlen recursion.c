#include<stdio.h>
#include<Windows.h>

int strlen(char *string)
{
	
	if (*string == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + strlen(string + 1);
	}
}
int main()
{
	char string[] = "abcdefg";
	printf("%d", strlen(string));
	system("pause");
	return 0;
}