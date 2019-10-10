#include<stdio.h>
#include<string.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{

	char password[20] = { 0 };//定义一个数组来存放密码，密码为字符串类型；
	int i = 0;
	char *p = "123456";

	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：\n");
		scanf("%s", password);
		if (0 == strcmp(password, p))
		{
			printf("登陆成功");
			break;
		}
		else 
		{
			printf("你输入有误!\n");
			printf("你还可以再输入%d次，请重新输入：\n",2-i);
		}
		
	}
	if (3 == i)
	{
		printf("你已经输了3次，登录失败\n");
	}
	system("pause");
	return 0;
}