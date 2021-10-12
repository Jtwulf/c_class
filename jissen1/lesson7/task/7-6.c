#include<stdio.h>

void reverse_str(char *p1, char *p2);
int char_length(char *p);
void remove_newline(char *p);


int main(){
	char str1[100], str2[100], *p1 = str1, *p2 = str2;
	printf("str1>");
	fgets(str1,100,stdin);
	remove_newline(p1);
	reverse_str(p1,p2);
	return 0;
}

void reverse_str(char *p1, char *p2){
	int len = char_length(p1);
	int i;
	for(i = 0; i < len; i++){
		*(p2+len-i-1) = *(p1+i);
	}
	printf("str1 = ");
	for(i = 0; i < len; i++){
		printf("%c",*(p1+i));
	}
	printf("\n");
	printf("str2 = ");
	for(i = 0; i < len; i++){
		printf("%c",*(p2+i));
	}
	printf("\n");
}

int char_length(char *p){
	int i = 0;
	while(*(p+i) != '\0')
		i++;
	return i;
}

void remove_newline(char *p){
	int len = char_length(p), i;
	for(i = 0; i < len; i++){
		if(*(p+i) == '\n')
			*(p+i) = '\0';
	}
}
