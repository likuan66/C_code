#include "game.h"
void game()
{
	char arr[row][col];
	int x = 0;
	int y = 0;
	char ret = 0;
	Init_borad(arr);//��ʼ������
	print_borad(arr);//��ӡ����
	printf("\n");
	while (1)
	{
		player_move(arr);//�������
		printf("\n");
		if ((ret = check_win(arr)) != ' ')//������������˵��˭Ӯ�˻�ƽ�֣��Ǿ�����ѭ���ж�
			break;
		computer_move(arr);//��������
		if ((ret = check_win(arr)) != ' ')//������������˵��˭Ӯ�˻�ƽ�֣��Ǿ�����ѭ���ж�
			break;
		print_borad(arr);//��ӡ�������͵��Ե���λ
		printf("\n");
	}
	if (ret == 'x')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '0')
	{
		printf("����Ӯ\n");
	}
	else if (ret == 'q')
	{
		printf("ƽ��\n");
	}
	print_borad(arr);//��ӡ����Ϸ���
}



int main()
{
	srand((unsigned int)time(NULL));//���������������
	int select = 0;
	int quit = 0;
	while (!quit)
	{
		meun();
		printf("������ѡ��\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1: game();
			break;
		case 0:
			printf("Bye Bye!\n");
			quit = 1;
			break;
		default:
			printf("�������,��������\n");
			break;
		}
	} 
	system("pause");
	return 0;
}
