#include<stdio.h>
#include<string.h>
#define N 1024

void print_recursive(char *str, int len){
	if(len < 0)
		return;
	printf("%c",*(str+len));
	len -= 2;
	print_recursive(str,len);
}

int main(){
	char str[N];
	printf("input str -> ");
	fgets(str,N,stdin);
	int len = strlen(str);

	print_recursive(str,len);
	printf("\n");
	return 0;
}
