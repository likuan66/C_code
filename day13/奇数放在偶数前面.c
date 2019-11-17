/*调整数组使奇数全部都位于偶数前面。 
题目： 
输入一个整数数组，实现一个函数， 
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分， 
所有偶数位于数组的后半部分。 */
#include<stdio.h>
#include<Windows.h>
void exchange(int *a,int len)
{
	int *left = a;
	int *right = a + len - 1;
	while (left < right)
	{
		if (*left % 2 == 0 && *right % 2 != 0)
		{
			int temp = *left;
			*left = *right;
			*right = temp;
		}
		if (*left % 2 != 0)
		{
			left++;
		}
		if (*right % 2 == 0)
		{
			right--;
		}
	}
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int len = sizeof(arr) / sizeof(arr[0]);
	exchange(arr, len);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}