//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ�� ��20Ԫ�����Զ�����ˮ�� ���ʵ�֡�
#include<stdio.h>
#include<Windows.h>
int main()
{
	int money = 20;
	int price = 1;
	int count = 0;
	int temp = 0;
	count = money / price;
	int ret = count;
	while (ret / 2)
	{
		temp = ret;  //��һ���м����temp��
		ret /= 2;
		count += ret;
		ret = temp % 2 + ret;  //����temp������

	}
	printf("%d\n", count);
	system("pause");
	return 0;
}