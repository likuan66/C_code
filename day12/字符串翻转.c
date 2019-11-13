/*有一个字符数组的内容为:"student a am i", 
请你将数组的内容改为"i am a student". 
要求： 
不能使用库函数。 
只能开辟有限个空间（空间个数和字符串的长度无关）。 
student a am i 
i ma a tneduts 
i am a student 
*/
#include<stdio.h>
#include<Windows.h>
#include<string.h>
void Reverse_swap(char *left,char *right)
{
	
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}

}
void Reverse(char *arr)
{
	char *left = arr;
	char *right = arr + strlen(arr) - 1;
	Reverse_swap(left, right);  //先将字符串翻转成i ma a tneduts
	while (*arr != '\0')
	{
		left = arr;
		while ((*arr != '\0') && (*arr != ' '))  //遍历每个单词
		{
			arr++;
		}
		right = arr - 1;
		Reverse_swap(left, right);  //将每个单词进行翻转
		if (*arr == ' ')  //如果等于空格，移向下一位
		{
			arr++;
		}
	}
}
int main()
{
	char a[] = "student a am i";
	printf("翻转前：%s\n", a);
	Reverse(a);
	printf("翻转后：%s\n", a);
	system("pause");
	return 0;
}