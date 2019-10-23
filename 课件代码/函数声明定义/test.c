#include "test.h"


int MyAdd(int x, int y)
{
	return x + y;
}
int MySub(int x, int y)
{
	return x - y;
}
int MyMul(int x, int y)
{
	return x*y;
}
int MyDiv(int x, int y)
{
	if (0 == y)
	{
		printf("div zero\n");
		return -1;
	}
	return x / y;
}
int MyMod(int x, int y)
{
	if (0 == y)
	{
		printf("div zero\n");
		return -1;
	}
	return x%y;
}