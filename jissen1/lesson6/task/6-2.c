#include<stdio.h>

void print_alternate(char str[]);
int countLength(char array[]);

int main(){
	char str[100];
	printf("input string:");
	fgets(str,100,stdin);
	printf("output string:");
	print_alternate(str);
	return 0;
}

void print_alternate(char str[]){
	int i, len = countLength(str);
	for(i = 0; i <= len; i++){
		if(i % 2 == 0)
			printf("%c",str[i]);
		else
			printf("%c",str[len-i]);
	}
	printf("\n");
}

int countLength(char array[]){
	int i = 0;
	while(array[i] != '\0'){
		i++;
	}
	return i-1;
}
