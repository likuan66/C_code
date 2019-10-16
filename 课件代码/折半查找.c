#include<stdio.h>
#include<Windows.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = num- 1;
	int key = 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (key > arr[mid])
		{
			left = mid + 1;
		}
		else if (key < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("found:%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("No found!");
	}
	system("pause");
	return 0;

}