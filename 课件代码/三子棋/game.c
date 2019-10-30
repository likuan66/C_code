
#include"game.h"  //引入头文件game.h


void meun()
{
	printf("*******************************\n");
	printf("*******1.play   0.exit*********\n");
	printf("*******************************\n");
}


void Init_borad(char arr[row][col])//初始化棋盘
{
	memset(arr, ' ', row*col*sizeof(char));
}


void print_borad(char arr[row][col])//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		printf(" %c | %c | %c \n", arr[i][0], arr[i][1], arr[i][2]);
		if (i != row)
		{
			printf("---|---|---\n");
		}
	}
}


void player_move(char arr[row][col])//玩家下棋
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入你要下的坐标:\n");
		scanf("%d%d", &x, &y);
		if ((x >= 1) && (x <= row) && (y >= 1) && (y <= row) && arr[x - 1][y - 1] == ' ')
		{
			arr[x - 1][y - 1] = 'x';
			break;
		}
		else
		{
			printf("坐标错误，重新输入\n");
		}
	}
}


void computer_move(char arr[row][col])//电脑下棋
{
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '0';
			break;
		}
	}
}


int is_full(char arr[row][col])//检测棋盘是否满了
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (arr[i][j] == ' ')
			{
				return 0;
			}

		}
	}
	return 1;
}


char check_win(char arr[row][col])//检测不同的结果并返回不同的值
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2] && arr[i][0] != ' ')//检测行是否相同
		{
			return arr[i][0];
		}
	}

	for (i = 0; i < col; i++)//检测列是否相同
	{
		if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i] && arr[0][i] != ' ')
		{
			return arr[0][i];
		}
	}

	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2] && arr[0][0] != ' ')//检测对角线
	{
		return arr[0][0];
	}

	if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[0][2] != ' ')//检测对角线
	{
		return arr[0][2];
	}

	if (is_full(arr))
	{
		return 'q';
	}
	return ' ';
}

