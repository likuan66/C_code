#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void isPrime(int num)
{
	int i = 0;
	for (i = 2; i <= sqrt(num); i++)
	{
		if (num%i == 0)
		{
			break;
		}
	}
	if (i > sqrt(num))
	{
		printf("%d是素数\n",num);
	}
	else
	{
		printf("%d不是素数\n",num);
	}
}

int main()
{
	int num = 0;
	printf("请输入一位数字:\n");
	scanf("%d", &num);

	isPrime(num);
	
	system("pause");
	return 0;

}