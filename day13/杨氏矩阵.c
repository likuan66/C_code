/*/���Ͼ��� 
��һ����ά����. 
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����. 
�������������в���һ�������Ƿ���ڡ� 
ʱ�临�Ӷ�С��O(N); 
���飺 
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
	printf("������Ҫ���ҵ�����\n");
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

	printf("��������1�����ҵ��ˣ���������0����ʾû�ҵ���\n%d\n", search(arr,N,N));
	system("pause");
	return 0;
}