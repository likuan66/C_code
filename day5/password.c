#include<stdio.h>
#include<string.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{

	char password[20] = { 0 };//����һ��������������룬����Ϊ�ַ������ͣ�
	int i = 0;
	char *p = "123456";

	for (i = 0; i < 3; i++)
	{
		printf("���������룺\n");
		scanf("%s", password);
		if (0 == strcmp(password, p))
		{
			printf("��½�ɹ�");
			break;
		}
		else 
		{
			printf("����������!\n");
			printf("�㻹����������%d�Σ����������룺\n",2-i);
		}
		
	}
	if (3 == i)
	{
		printf("���Ѿ�����3�Σ���¼ʧ��\n");
	}
	system("pause");
	return 0;
}