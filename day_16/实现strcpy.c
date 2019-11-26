#include<stdio.h>
#include<Windows.h>
#include<assert.h>
char  *my_strcpy(char *arr,const char *brr)
{
	assert(arr);
	assert(brr);
	char *ret = arr;
	while ((*arr++ = *brr++) != '\0');
	return ret;
}
int main()
{
	char a[20] = "abcd";
	char b[]="efg";
	printf("%s",my_strcpy(a, b));
	system("pause");
	return 0;
}