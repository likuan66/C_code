#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)

int binary_search(int arr[], int key, int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else if(arr[mid] < key)
		{
			left = mid + 1;
		}
		else
			return mid;
	}
	return -1;

}
int main()
{
	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int key = 0;
	int sz = 0;
	int ret = 0;

	printf("请输入要查找的数：");
	scanf("%d\n", &key);
	sz = sizeof(arr) / sizeof(arr[0]);
	ret = binary_search(arr, key, sz);
	if (ret == -1)
	{
		printf("找不到：\n");
	}
	else
	{
		printf("找到了，下标是：%d", ret);
	}
	system("pause");
	return 0;
}