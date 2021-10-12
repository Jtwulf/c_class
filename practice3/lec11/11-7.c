#include<stdio.h>
#include<string.h>
#define N 1024

void exchange(char *p1, char *p2);

int main(){
	char str[10];
	printf("str -> ");
	scanf("%s",str);

	int len = strlen(str);
	int i, j;
	for(i = 0, j = len-1; i <= len/2; i++, j--){
		exchange((str+i),(str+j));
	}

	printf("%s\n",str);
}

void exchange(char *p1, char *p2){
	char buf = *p1;
	*p1 = *p2;
	*p2 = buf;
}
