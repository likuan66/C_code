#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#include<Windows.h>

int main()

{

	int max = 0;

	int arr[10];

	printf("������ʮ��������");

	for (int i = 0; i < 10; i++)

	{

		scanf("%d", &arr[i]);

	}

	max = arr[0];

	for (int i = 0; i < 10; i++)

	{

		if (max < arr[i])

		{

			max = arr[i];

		}

	}

	printf("�������е����ֵ�ǣ�%d", max);

	system("pause");

	return 0;

}
