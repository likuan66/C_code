/*.��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
2550136832*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
unsigned int reverse_bit(unsigned int value)
{
	int ret = 0;
	int bit = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		ret = ret << 1;  //��bit��ȡ���������һλ������ret�ĵ�һλ
		bit = value & 1;   //�����һλ��ʼ����ȡ��ÿһλ
		value = value >> 1; //����һλȡ��һλ
		ret = bit | ret; //��ȡ������ÿһλ��0�����㣬����ret��
	}
	return ret;
}
int main()
{
	int m;
	scanf("%d", &m);
	printf("%u\n", reverse_bit(m)); //%u��ʾ�޷�����������Ҫ������޷�������
	system("pause");
	return 0;
}