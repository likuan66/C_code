#include<stdio.h>
#include<Windows.h>

int exchange(int *x,int *y)
{
	*x = *x^*y;
	*y = *x^*y;
	*x = *x^*y;
	return *x, *y;
}
int main()
{
	int x = 10;
	int y = 20;
	exchange(&x, &y);
	printf("%d %d",x,y);
	system("pause");
	return 0;
}