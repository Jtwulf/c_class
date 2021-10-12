#include<stdio.h>
#include<string.h>

int main(){
	char str[100], *str_ptr = &str[0];
	printf("英文字列を入力して下さい：");
	fgets(str,100,stdin);

	int len = strlen(str), i;
	for(i = 0; i < len; i++){
		if('a' <= *(str_ptr+i) && *(str_ptr+i) <= 'z'){
			if(*(str_ptr+i)+2 > 'z'){
				printf("%c",*(str_ptr+i)+2-26);
			} else {
				printf("%c",*(str_ptr+i)+2);
			}
		} else if('A' <= *(str_ptr+i) && *(str_ptr+i) <= 'Z'){
			if(*(str_ptr+i)+2 > 'Z'){
				printf("%c",*(str_ptr+i)+2-26);
			} else {
				printf("%c",*(str_ptr+i)+2);
			}
		} else {
			printf("%c",*(str_ptr+i));
		}
	}

	return 0;
}
