#include<stdio.h>
#include<string.h>

int main(){
	char hello[] = "Hello The World!", *hello_ptr = hello;
	int i;
	for(i = 0; i < strlen(hello); i++){
		if('a' <= *(hello_ptr+i) && *(hello_ptr+i) <= 'z'){
			*(hello_ptr+i) -= 32;
		} else if('A' <= *(hello_ptr+i) && *(hello_ptr+i) <= 'Z'){
			*(hello_ptr+i) += 32;
		}
		printf("%c",*(hello_ptr+i));
	}
	printf("\n");
	return 0;
}
