#include<stdio.h>
#include<string.h>

int main(){
	char hello[] = "Hello The World!", *hello_ptr = hello;
	int i;
	for(i = 0; i < strlen(hello); i++){
		if('a' <= *hello_ptr && *hello_ptr <= 'z'){
			*hello_ptr -= 32;
		} else if('A' <= *hello_ptr && *hello_ptr <= 'Z'){
			*hello_ptr += 32;
		}
		printf("%c",*hello_ptr);
		hello_ptr ++;	
	}
	printf("\n");
	return 0;
}	
