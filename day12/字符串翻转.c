/*��һ���ַ����������Ϊ:"student a am i", 
���㽫��������ݸ�Ϊ"i am a student". 
Ҫ�� 
����ʹ�ÿ⺯���� 
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ��� 
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
	Reverse_swap(left, right);  //�Ƚ��ַ�����ת��i ma a tneduts
	while (*arr != '\0')
	{
		left = arr;
		while ((*arr != '\0') && (*arr != ' '))  //����ÿ������
		{
			arr++;
		}
		right = arr - 1;
		Reverse_swap(left, right);  //��ÿ�����ʽ��з�ת
		if (*arr == ' ')  //������ڿո�������һλ
		{
			arr++;
		}
	}
}
int main()
{
	char a[] = "student a am i";
	printf("��תǰ��%s\n", a);
	Reverse(a);
	printf("��ת��%s\n", a);
	system("pause");
	return 0;
}