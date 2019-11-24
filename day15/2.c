//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水， 给20元，可以多少汽水。 编程实现。
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
		temp = ret;  //找一个中间变量temp，
		ret /= 2;
		count += ret;
		ret = temp % 2 + ret;  //加上temp的余数

	}
	printf("%d\n", count);
	system("pause");
	return 0;
}