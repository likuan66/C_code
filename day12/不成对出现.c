/*���ʵ�֣� 
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0; int num = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//^�����ͬΪ0����ͬΪ1������ͬһ����������Σ��൱�ڣ���0�������ֻʣ�µ���������0���
		num = num^arr[i]; 
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}