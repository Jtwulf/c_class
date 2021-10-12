#include<stdio.h>

void convert_char(char *p, char c);

int main(){
	char str[30], *p = str;
	printf("str -> ");
	fgets(str,30,stdin);
	convert_char(p,';');

	printf("%s\n",str);

	return 0;
}

void convert_char(char *p, char c){
	if(*p == '\n'){
		return;
	} else if(*p == ' '){
		*p = c;
	}
	p++;
	convert_char(p,c);
}
