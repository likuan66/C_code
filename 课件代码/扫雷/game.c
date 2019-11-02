#include "game.h"

void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	memset(mine, '0', sizeof(mine));//��ʼ��������Ϊ0
	memset(show, '*', sizeof(show));//��ʼ��������Ϊ*
	int no_y, no_x;
	set_mine(mine,ROWS,COLS,&no_x,&no_y);//����  ��1����ʾ��
	int x = 0;
	int y = 0;
	int time = 100 - NUM;
	
	while (time > 0)
	{
		system("cls");//����
		Show(show, ROWS, COLS);//��ӡ ����
		printf("���������꣺\n");
		scanf("%d%d", &x, &y);
		if (x<1 || x>10 || y<1 || y>10)
		{
			printf("�������������������룺\n");
			continue;
		}
		if (show[x][y] != '*')
		{
			printf("�������������������룺\n");
			continue;
		}
		if (mine[x][y] == '1')
		{
			if (time == 80)//�����һ�����ף���һ��û�׵����������
			{
				mine[x][y] = '0';
				mine[no_y][no_y] = '1';
			}
			else
			{
				printf("game over!\n");
				Show(mine, ROWS, COLS);
				break;
			}
		}
		show[x][y] = get_mine_count(mine, x, y) + '0';

		time--;
	}


}
void set_mine(char mine[ROWS][COLS],int col,int row,int *no_x,int *no_y)//�������׺���
{
	int count = NUM;//���ü�������ͳ�Ʋ��׵ĸ���

	while (count > 0)
	{
		int x = rand() % (col-2) + 1;
		int y = rand() % (col-2) + 1;
		if ((mine[x][y]) == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; i <= 10; j++)
		{
			if (mine[i][j] == '0')
			{
				no_x = i;
				no_y = j;
				return;
			}
		}
	}
}
void Show(char mine[ROWS][COLS], int row, int col)//������ӡ���̺���
{
	int i = 0;
	int j = 0;
	printf("    ");
	for (i = 1; i <= 10 ; i++)
	{
		printf("%2d |", i);
	}
	printf("\n");
	for (i = 1; i <= 11; i++)
	{
		printf("----");
	}
	printf("\n");
	for (i = 1; i <= 10 ; i++)
	{
		printf("%2d |", i);
		for (j = 1; j <= 10; j++)
		{
			printf("%2c |", mine[i][j]);
		}
		printf("\n");
		for (int i = 1; i <= 11; i++)
		{
			printf("----");
		}
		printf("\n");
	}

}
int get_mine_count(char mine[ROWS][COLS], int x, int y)//����ͳ��
{
	return mine[x - 1][y - 1]+ mine[x][y - 1] + mine[x + 1][y - 1]+ mine[x + 1][y]\
		+ mine[x + 1][y + 1]+ mine[x][y + 1] + mine[x - 1][y + 1]+ mine[x - 1][y] - 8 * '0';
}

