/*�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 =AABCD��s2 = BCDAA������1
����s1=abcd��s2=ACBD������0. */
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
int judge(char str1[], char arr[], char str2[]) {
	char *a = arr;
	char *s = str1;
	//�ж������ַ����ĳ��ȣ�������Ȳ�һ���Ͳ�������Դ�ַ�����ת��Ľ��
	if (strlen(str1) != strlen(str2)) {
		return 0;
	}
	//������str1�ַ����ϲ�
	while (*a) {
		a++;
	}
	while (*s) {
		*a++ = *s++;
	}
	//strstr�����жϺ��溯���ǲ���ǰ�溯�������ַ���
	char *ret = NULL;
	ret = strstr(arr, str2);
	if (ret != NULL) {
		return 1;
	}
	return 0;
}
int main() {
	char s1[] = "abcdef";
	char arr[1024];
	char s2[] = "bcdefa";
	strcpy(arr, s1);
	if (judge(s1, arr, s2)) {
		printf("%s �� %s ��ת֮����ַ�����\n", s2, s1);
	}
	else {
		printf("%s ���� %s ��ת֮����ַ�����\n", s2, s1);
	}
	system("pause");
	return 0;
}