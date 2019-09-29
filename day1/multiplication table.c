#include<stdio.h>
#include<stdlib.h>
int main(){
	int s = 0;
	for (int i = 1; i <= 9; i++){
		for (int j = 1; j <= i; j++){
			s = i*j;
			printf("%d*%d=%d\t", j, i, s);
			if (i == j){
				printf("\n");
			}
		}
	}
	getchar();
	return 0;
}
