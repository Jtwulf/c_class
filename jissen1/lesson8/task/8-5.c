#include<stdio.h>
#include<string.h>

void print_alternate(char str[]);
void remove_newline(char str[]);
int count_length(char str[]);

int main(){
	char str[100];
	printf("input string: ");
	fgets(str,100,stdin);
	print_alternate(str);
	return 0;
}

void print_alternate(char str[]){
	char *ptr = str;
	remove_newline(str);
	int len = count_length(str), i, j;

	if(len % 2 == 0){
		for(i = 0, j = len-1; i < len/2; i++, j--){
			printf("%c",*(ptr+i));
			printf("%c",*(ptr+j));
		}
	} else {
		for(i = 0, j = len-1; i < len/2; i++, j--){
			printf("%c",*(ptr+i));
			printf("%c",*(ptr+j));
		}
		printf("%c",*(ptr+i));
	}
	printf("\n");
}

void remove_newline(char str[]){
	int len = strlen(str);
	if(str[len-1] == '\n')
		str[len-1] = '\0';
}

int count_length(char str[]){
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}
