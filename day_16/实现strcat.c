#include<stdio.h>
#include<Windows.h>

char *my_strcat(char *arr,const char *brr)
{
	char *str = arr;
	while (*arr != '\0')
	{
		arr++;
	}
	while ((*arr++ = *brr++) != '\0');
	return str;
}
int main()
{
	char a[20] = "acdefg";
	char b[] = "hijk";
	printf("%s\n", my_strcat(a, b));

	system("pause");
	return 0;
}