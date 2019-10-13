
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

void init(int arr[],int length)               //初始化数组
{
	int i = 0;
	int num = 0;
	printf("初始化数组，请输入5个数:\n");
	for (i = 0; i < length; i++)
	{
		scanf("%d", &num);
		arr[i] = num;
	}
}

void empty(int arr[],int length)              //清空数组
{
	int i = 0;
	printf("清空数组：\n");
	for (i = 0; i < length; i++)
	{
		arr[i] = 0;
	}
	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int length)           //逆置数组
{
	int i = 0;
	int temp = 0;
	printf("逆置数组:\n");
	for (i = 0; i < length/2; i++)
	{
		temp = arr[i];
		arr[i] = arr[length - 1 - i];
		arr[length - 1 - i] = temp;
	}
	for (i = 0; i < length; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[5] = { 0 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	init(arr, length);
	reverse(arr, length);
	empty(arr, length);
	
	system("pause");
	return 0;


}
