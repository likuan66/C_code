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
		printf("%d������\n",num);
	}
	else
	{
		printf("%d��������\n",num);
	}
}

int main()
{
	int num = 0;
	printf("������һλ����:\n");
	scanf("%d", &num);

	isPrime(num);
	
	system("pause");
	return 0;

}