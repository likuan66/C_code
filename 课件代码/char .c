//编写代码，演示多个字符从两端移动，向中间汇聚
#include<stdio.h>
#include<Windows.h>

int main()
{
	char arr1[] = "come on !";
	char arr2[] = "#########";

	int left = 0;
	int right = strlen(arr1) - 1;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		left++;
		right--;
		printf("%s\r", arr2);
	}
	printf("\n");
	system("pause");
	return 0;
}
