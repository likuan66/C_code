#include<stdio.h>
#include<windows.h>
#include<time.h>
#pragma warning(disable:4996)
void menu()
{
	printf("***********************************\n");
	printf("***********    1.play   ***********\n");
	printf("***********    0.exit   ***********\n");
	printf("***********************************\n");
}
void game()
{
	int i = 0;
	int ret = 0;
	ret = rand() % 100 + 1;
	while (1)
	{
		printf("����������Ϊ�����֣�");
		scanf("%d", &i);
		if (i>ret)
		{
			printf("�´���\n");
		}
		else if (i<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣡�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("������������������\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
