#include<stdio.h>

void convert_char(char *p, char c);

int main(){
	char str[30];
	printf("str -> ");
	fgets(str,30,stdin);
	convert_char(&str[0],';');
	printf("%s",str);
	return 0;
}

void convert_char(char *p, char c){
	if(*p == '\n'){
		return;
	} else {
		if(*p == ' '){
			*p = c;
		}
		convert_char(p+1,c);
	}
}
