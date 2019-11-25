#include<stdio.h>
#include<Windows.h>
int my_strcmp(const char *a, const char *b)
{
	while (*a != '\0'&&*b != '\0'&&*a==*b)
	{
		a++;
		b++;
	}
	if (*a == *b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	char s1[] = "abcdef";
	char s2[] = "efgh";
	int p = my_strcmp(s1, s2);
	printf("%d", p);
	system("pause");
	return 0;
}