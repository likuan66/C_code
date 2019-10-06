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
		printf("请输入你认为的数字：");
		scanf("%d", &i);
		if (i>ret)
		{
			printf("猜大了\n");
		}
		else if (i<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你！猜对了\n");
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
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误，请重新输入\n");
			break;
		}
	} while (input);
	system("pause");
	return 0;
}
