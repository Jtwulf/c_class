#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024

void exchange(char *p1, char *p2);

int main(){
	char str[10], *ptr = str;
	printf("str -> ");
	scanf("%s",str);

	int len = strlen(str);
	printf("%d\n",len);
	int i, j;
	for(i = 0, j = len-1; i < len; i++, j--){
		exchange(*(str+i),*(str+j));
	}

	printf("%s\n",str);
	return 0;
}

void exchange(char *p1, char *p2){
	char buf;
	buf = *p1;
	*p1 = *p2;
	*p2 = buf;
}
