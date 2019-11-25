#include<stdio.h>
#include<Windows.h>
#include<assert.h>
char *my_strchr(const char *a, const char *b)
{
	assert(a);
	while (*a != '\0')
	{
		if (*a == b)
		{
			return a;
		}
		a++;
	}
	return NULL;
}
int main()
{

	char arr[] = "abcdef";
	char *p = my_strchr(arr, 'c');
	printf("%s\n", p);
	system("pause");
	return 0;
}