//һ��������ֻ�����������ǳ���һ�Σ� �����������ֶ����������Ρ� �ҳ����������֣����ʵ�֡�
#define _CRT_SECURE_NO_WARNINGS 1
#include <Windows.h>
#include <stdlib.h>
void find_num(int arr[], int sz)
{
	int i, j, k = 0;
	for (i = 0; i < sz; i++)
	{
		k = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[j] == arr[i])
				k++;
		}
		if (k == 1)
			printf("����Ϊ %d\n", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 1, 2, 3, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	find_num(arr, sz);
	system("pause");
	return 0;
}
