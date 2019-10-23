#include "test.h"

void Menu()
{
	printf("#########################\n");
	printf("##1.ADD          2.SUB###\n");
	printf("##3.MUL          4.DIV###\n");
	printf("##5.MOD          6.EXIT##\n");
	printf("#########################\n");
	printf("Please Enter#");
}
int main()
{
	int quit = 0;
	while (!quit)
	{
		Menu();
		int select = 0;
		scanf("%d", &select);
		if (select == 6)
		{
			printf("Bye Bye!\n");
			quit = 1;
			continue;
		}
		
		int x = 0;
		int y = 0;
		printf("Please Enter You Date<x,y>#");
		scanf("%d %d", &x, &y);
		int z = 0;

		switch (select)
		{
		case 1:
			z = MyAdd(x, y);
			break;
		case 2:
			z = MySub(x, y);
			break;
		case 3:
			z = MyMul(x, y);
			break;
		case 4:
			z = MyDiv(x, y);
			break;
		case 5:
			z = MyMod(x, y);
			break;
		default:
			printf("Select Error\n");
			break;
		}
		printf("result:%d\n", z);
	}
	system("pause");
	return 0;
}