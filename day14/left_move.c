/*ʵ��һ�����������������ַ����е�k���ַ��� 
ABCD����һ���ַ��õ�BCDA 
ABCD���������ַ��õ�CDAB */
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
	printf("����ǰ��%s", str);
	printf("\n");
	turn(str,m );
	printf("������%s", str);
	printf("\n");
	system("pause");
	return 0;
}