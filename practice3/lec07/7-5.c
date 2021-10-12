#include<stdio.h>
#include<string.h>

int main(){
	char s[] = "abcdefg", *ptr = &s[strlen(s)-1];
	for(int i = strlen(s); i > 0; i--){
		printf("%s\n",ptr);
		ptr--;
	}
	return 0;
}
