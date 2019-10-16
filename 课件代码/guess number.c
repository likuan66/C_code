//猜数字游戏
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#include<time.h>
#define USER "tom"
#define PSD "123456"
#define M 12

void Menu()
{
	printf("############################");
	printf("## 1.Play      2.Exit##\n");
	printf("############################");
	printf("Please Select>");
}
void Play()
{
	int n = rand() % 100 + 1;
	int x = 0;
	do{
		printf("guess# ");
		scanf("%d", &x);
		if (x > n)
		{
			printf("guess big!\n");
		}
		else if (x < n)
		{
			printf("guess small!\n");
		}
		else
		{
			printf("you are right!: %d\n", x);
			break;
		}
	} while (1);
}
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
		//如果登录成功 5个数后会显示登录完成
		int i = 5;
		while (i > 0)
		{
			printf("loading...%d\r", i);
			Sleep(1000);
			i--;
		}
		printf("loading...done!\n");

		srand((unsigned long)time(NULL));
		int quit = 0;
		while (!quit)
		{
			Menu();
			int select = 0;
			scanf("%d", &select);
			switch (select)
			{
			case 1:
				Play();
				break;
			case 2:
				printf("ByeBye!\n");
				quit = 1;
				break;
			default:
				printf("Enter Error!\n");
				break;
			}
		}
	}
	else
	{
		printf("login failed!\n");
	}
	system("pause");
	return 0;
}