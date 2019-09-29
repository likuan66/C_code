#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	c = a;
	a = b;
	b = c;
	printf("a=%d b=%d", a, b);
	getchar();
	return 0;
}
