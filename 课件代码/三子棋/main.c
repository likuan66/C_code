#include "game.h"
void game()
{
	char arr[row][col];
	int x = 0;
	int y = 0;
	char ret = 0;
	Init_borad(arr);//初始化棋盘
	print_borad(arr);//打印棋盘
	printf("\n");
	while (1)
	{
		player_move(arr);//玩家下棋
		printf("\n");
		if ((ret = check_win(arr)) != ' ')//里面条件成立说明谁赢了或平局，那就跳出循环判断
			break;
		computer_move(arr);//电脑下棋
		if ((ret = check_win(arr)) != ' ')//里面条件成立说明谁赢了或平局，那就跳出循环判断
			break;
		print_borad(arr);//打印出这次你和电脑的走位
		printf("\n");
	}
	if (ret == 'x')
	{
		printf("玩家赢\n");
	}
	else if (ret == '0')
	{
		printf("电脑赢\n");
	}
	else if (ret == 'q')
	{
		printf("平局\n");
	}
	print_borad(arr);//打印出游戏结果
}



int main()
{
	srand((unsigned int)time(NULL));//设置随机数生成器
	int select = 0;
	int quit = 0;
	while (!quit)
	{
		meun();
		printf("请输入选项\n");
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
			printf("输入错误,重新输入\n");
			break;
		}
	} 
	system("pause");
	return 0;
}
