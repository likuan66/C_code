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
			printf("��ϲ���ҵ���,�±�Ϊ��%d", mid);
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
		printf("û���ҵ�\n");
	}
	system("pause");
	return 0;
}