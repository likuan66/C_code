/*��������ʹ����ȫ����λ��ż��ǰ�档 
��Ŀ�� 
����һ���������飬ʵ��һ�������� 
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣� 
����ż��λ������ĺ�벿�֡� */
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