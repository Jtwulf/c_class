#include<stdio.h>
#include<string.h>

void replace(char s[], char src[], char dst[]);

#define N 1024

int main(){
	char src[N] = "vin";
	char dst[N] = "123";
	char s[] = "vom";
	replace(s,src,dst);

	printf("%s\n",s);

	return 0;
}

void replace(char s[], char src[], char dst[]){
	for(int i = 0; i < strlen(s); i++){
		for(int j = 0; j < strlen(src); j++){
			if(s[i] == src[j]){
				s[i] = dst[j];
			}
		}
	}
}
