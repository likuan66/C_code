/*/杨氏矩阵 
有一个二维数组. 
数组的每行从左到右是递增的，每列从上到下是递增的. 
在这样的数组中查找一个数字是否存在。 
时间复杂度小于O(N); 
数组： 
1 2 3 
2 3 4 
3 4 5 

1 3 4 
2 4 5 
4 5 6 
 */
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
#define N 3
int search(int a[N][N], int m, int n)
{
	int key;
	printf("请输入要查找的数：\n");
	scanf("%d", &key);
	int row = m - 1;
	int col = 0;
	while (col < n)
	{
		if (key < a[row][col])
		{
			row--;
		}
		else if (key>a[row][col])
		{
			col++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[N][N] = { { 1, 2, 3 }, { 2, 3, 4 }, { 3, 4, 5 } };

	printf("如果输出是1，则找到了，如果输出是0，表示没找到：\n%d\n", search(arr,N,N));
	system("pause");
	return 0;
}