//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɹ���������ξ�����������˳�����
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#include<time.h>
#define USER "tom"
#define PSD "123456"
int main()
{
	char name[32];
	char passwd[32];
	int count = 3;
	while (count > 0)
	{
		count--;
		printf("Please Enter Your name: ");
		scanf("%s", name);
		printf("Please Enter Your passwd: ");
		scanf("%s", passwd);

		if (strcmp(USER, name) == 0 && strcmp(PSD, passwd) == 0)
		{
			break;
		}
		else
		{
			printf("name or passwd error,try again!you have %d times\n", count);
		}
	}
	if (count > 0)
	{
		printf("login sucess!\n");
		//�����¼�ɹ� 5���������ʾ��¼���
		int i = 5;
		while (i > 0)
		{
			printf("loading...%d\r", i);
			Sleep(1000);
			i--;
		}
		printf("loading...done!\n");
	}
	else
	{
		printf("you are not login sucess!\n");
	}
	
	system("pause");
	return 0;
}