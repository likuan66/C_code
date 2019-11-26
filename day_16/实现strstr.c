#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable:4996)

char *mystrstr(char *s1, char *s2)
{
	int n;
	if (*s2)
	{
		while (*s1)
		{
			for (n = 0; *(s1 + n) == *(s2 + n); n++)
			{
				if (*(s2 + n + 1)=='\0')
				{
					return s1;
				}
			}
			s1++;
		}
		return NULL;
	}
	else
	{
		return s1;
	}
}
int main(void)
{
	char *s = "Golden Global View";
	char *l = "ob";  
	char *p;
	p = mystrstr(s, l);
	if (p != NULL)
	{
		printf("%s\n", p);

	}
	else
	{
		printf("Not Found!\n");
	}
	system("pause");

	return 0;

}
