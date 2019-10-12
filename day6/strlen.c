#include<stdio.h>
#include<Windows.h>

int strlen(char *string)
{
	int count = 0;
	while (*string != '\0')
	{
		count++;
		string++;
	}
	return count;
}
int main()
{
	char string[] = "abcdefg";

	printf("%d",strlen(string));

	system("pause");
	return 0;
}