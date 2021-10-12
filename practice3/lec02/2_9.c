#include<stdio.h>
int main(){
	printf("\x1b[31m");
	printf("\x1b[4m");
	printf("\x1b[1m");
	printf("これは緑(yellow)です。\n");
	printf("\x1b[39m");
	return 0;
}
