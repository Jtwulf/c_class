#include<stdio.h>

void printReverse(char letters[], int n);
int countLength(char letters[]);

int main(){
	char letters[80];
	printf("適当な英字文字列を入力して下さい：");
	fgets(letters,80,stdin);
	int len = countLength(letters);
	if(letters[len-1] == '\n')
		letters[len-1] = '\0';
	printReverse(letters,countLength(letters));
	return 0;
}

void printReverse(char letters[], int n){
	int i;
	for(i = n-1; i >= 0; i--){
		printf("%c",letters[i]);
	}
	printf("\n");
}

int countLength(char letters[]){
	int i = 0;
	while(letters[i] != '\0')
		i++;
	return i;
}
