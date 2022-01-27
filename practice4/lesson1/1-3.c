#include<stdio.h>
#include<string.h>

int main(){
	char str[20];
	int buf;
	printf("20文字以内の文字列 => ");
	fgets(str,20,stdin);

	for(int i = 0; i <  strlen(str); i++){
		buf = (int)str[i];
		if(str[i] == '\n')
			break;
		if(!('A' <= buf && buf <= 'Z' || 'a' <= buf && buf <= 'z'))
			buf = 0;
		if('A' <= buf && buf <= 'Z')
			buf += 32;
		if('a' <= buf && buf <= 'z')
			buf -= 96;
		printf("%d ",buf);
	}
	printf("\n");

	return 0;
}
