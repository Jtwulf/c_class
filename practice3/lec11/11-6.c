#include<stdio.h>

void classify_str(char str[], int n, char *number, char *s_str, char *b_str);

int main(){
	char str[20], number[20], s_str[20], b_str[20];
	char *number_p = number, *s_str_p = s_str, *b_str_p = b_str;
	printf("str -> ");
	scanf("%s",str);
	classify_str(str,20,number_p,s_str_p,b_str_p);

	printf("数字列:");
	for(int i = 0; '0' <= number[i] && number[i] <= '9'; i++){
		printf("%c",number[i]);
	}
	printf("\n");
	printf("英大文字列:");
	for(int i = 0; 'A' <= b_str[i] && b_str[i] <= 'Z'; i++){
		printf("%c",b_str[i]);
	}
	printf("\n");
	printf("英小文字列:");
	for(int i = 0; 'a' <= s_str[i] && s_str[i] <= 'z'; i++){
		printf("%c",s_str[i]);
	}
	printf("\n");
	return 0;
}

void classify_str(char str[], int n, char *number, char *s_str, char *b_str){
	for(int i = 0, j = 0, k = 0, l = 0; i < n; i++){
		if('0' <= str[i] && str[i] <= '9'){
			*(number+j) = str[i];
			j++;
		}
		if('a' <= str[i] && str[i] <= 'z'){
			*(s_str+k) = str[i];
			k++;
		}
		if('A' <= str[i] && str[i] <= 'Z'){
			*(b_str+l) = str[i];
			l++;
		}
	}
}
