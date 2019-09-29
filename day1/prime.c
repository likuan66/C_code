#include<stdio.h>
#include<stdlib.h>
int main(){
	int sum = 0;
	
	for (int i = 100; i <= 200; i++)
	{
		int j = 0;
		for ( j = 2; j <= i; j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j == i){
			sum++;
			printf("%d ", i);
			}
		}
	printf("\n");
	printf("100µ½200Ö®¼ä×Ü¹²ÓÐ%d¸öËØÊý", sum);
	getchar();
	return 0;
	}
