#include<stdio.h>
#include<string.h>

int main(){
	char str[20], *p = str;
	printf("str -> ");
	scanf("%s",str);

	for(int i = 0; i < strlen(str); i++){
		if('A' <= *p && *p <= 'Z'){
			*p += 32;
		}
		p++;
	}
	printf("%s\n",str);
	return 0;
}
