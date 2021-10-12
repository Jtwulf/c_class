#include<stdio.h>
#define N 1024

int main(){
	char str[N];
	printf("str -> ");
	scanf("%s",str);
	printf("str -> ");
	scanf("%s",str+2);
	printf("%s\n",str);
	return 0;
}
