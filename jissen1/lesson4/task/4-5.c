#include<stdio.h>

void printInUppercase(char letters[]);
int countLength(char letters[]);
void removeNewline(char letters[]);

int main(){
	char letters[80];
	printf("適当な英数字を入力して下さい：");
	fgets(letters,80,stdin);
	removeNewline(letters);
	printInUppercase(letters);
	return 0;
}

void printInUppercase(char letters[]){
	int i,j,len = countLength(letters);

	for(i = 0; i < len; i++){
		if(97 <= letters[i] <= 122)
			letters[i] -= 32;
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

void removeNewline(char letters[]){
	int len = countLength(letters);
	if(letters[len-1] == '\n')
		letters[len-1] = '\0';
}
