#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a=10 , b=20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
	getchar();
	return 0;
}
