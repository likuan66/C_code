#include "game.h"

void Menu()
{
	printf("##########################\n");
	printf("##1.play  0.exit##########\n");
	printf("##########################\n");
	printf("## Please Enter select! ##\n");
}

int main()
{
	Menu();
	srand((unsigned int)time(NULL));
	int quit = 0;
	while (!quit)
	{
		int select = 0;
		printf("���������ѡ��\n");
		scanf("%d", &select);
		switch (select)
		{
		case 1:
			game();
			break;
		case 2:
			quit = 1;
			break;
		default :
			printf("�������������������룺\n");
			break;
		}
	}
	printf("Bye Bye!\n");
	system("pause");
	return 0;
}