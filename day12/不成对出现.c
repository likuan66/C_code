/*编程实现： 
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）*/
#include<stdio.h>
#include<Windows.h>
#pragma warning(disable:4996)
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1 };
	int i = 0; int num = 0;
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		//^异或相同为0，不同为1，而对同一个数异或两次，相当于，与0异或。最后就只剩下单数的数与0异或
		num = num^arr[i]; 
	}
	printf("%d\n", num);
	system("pause");
	return 0;
}