#include<stdio.h>
#include<string.h>

#define N 1024

void make_double(char src[], char dst[]);

int main(){
	char src[N], dst[N];
	printf("src -> ");
	scanf("%s",src);
	make_double(src,dst);

	printf("%ld\n",strlen(dst));
	for(int i = 0; i < strlen(dst); i++){
		printf("%c",dst[i]);
	}
	printf("\n");
	return 0;
}

void make_double(char src[], char dst[]){
	int len = strlen(src);
	int i, j;
	for(i = 0, j = 0; i < len; i++, j+=2){
		dst[j] = src[i];
		dst[j+1] = src[i];
	}
	dst[j] = '\0';

	printf("%ld\n",strlen(src));
}
