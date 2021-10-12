#include<stdio.h>
#include<string.h>

void remove_num(char *s);

int main(){
	char str[] = "2020/06/05";
	char *ptr = str;

	remove_num(ptr);
	int i, len = strlen(str);

	for(i = 0; i < len; i++){
		printf("%c",str[i]);
	}
	printf("\n");

	return 0;
}

void remove_num(char *s){
	char *s2 = s;
	int i, j, len = strlen(s);

	for(i = 0; i < len; i++){
		if('0' <= *(s+i) && *(s+i) <= '9'){
			for(j = i; j < len; j++){
				*(s2+j) = *(s2+j+1);
			}
			i--;
		}
	}
}
