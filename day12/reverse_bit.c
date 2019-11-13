/*.编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值是value的二进制位模式从左到右翻转后的值。
如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
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
		ret = ret << 1;  //从bit中取出来的最后一位，放在ret的第一位
		bit = value & 1;   //从最后一位开始依次取出每一位
		value = value >> 1; //右移一位取下一位
		ret = bit | ret; //将取出来的每一位与0或运算，放在ret中
	}
	return ret;
}
int main()
{
	int m;
	scanf("%d", &m);
	printf("%u\n", reverse_bit(m)); //%u表示无符号整数，按要求输出无符号整数
	system("pause");
	return 0;
}