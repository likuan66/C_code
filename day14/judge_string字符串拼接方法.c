/*判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 =AABCD和s2 = BCDAA，返回1
给定s1=abcd和s2=ACBD，返回0. */
#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>
#include <string.h>
int judge(char str1[], char arr[], char str2[]) {
	char *a = arr;
	char *s = str1;
	//判断两个字符串的长度，如果长度不一样就不可能是源字符串旋转后的结果
	if (strlen(str1) != strlen(str2)) {
		return 0;
	}
	//将两个str1字符串合并
	while (*a) {
		a++;
	}
	while (*s) {
		*a++ = *s++;
	}
	//strstr函数判断后面函数是不是前面函数的子字符串
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
		printf("%s 是 %s 旋转之后的字符串！\n", s2, s1);
	}
	else {
		printf("%s 不是 %s 旋转之后的字符串！\n", s2, s1);
	}
	system("pause");
	return 0;
}