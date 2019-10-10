#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int k = 6;
	int left = arr[0];
	int right = sizeof(arr) / sizeof(arr[0]) - 1;

	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (k == arr[mid])
		{
			printf("恭喜你找到了,下标为：%d", mid);
			break;
		}
		else if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	while (left>right)
	{
		printf("没有找到\n");
	}
	system("pause");
	return 0;
}