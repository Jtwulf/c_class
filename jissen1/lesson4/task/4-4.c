#include<stdio.h>

int countLength(char letters[]);
void removeChar(char letters[], char target);
void printCharArray(char array[],int len);

int main(){
	char letters[80];
	printf("適当な英字文字列を入力して下さい：");
	fgets(letters,80,stdin);
	
	int len = countLength(letters);
	if(letters[len-1] == '\n')
		letters[len-1] = '\0';

	printCharArray(letters,countLength(letters));
	removeChar(letters,'a');
	printCharArray(letters,countLength(letters));

	return 0;
}

int countLength(char letters[]){
	int i = 0;
	while(letters[i] != '\0')
		i++;
	return i;
}

void removeChar(char letters[], char target){
	int i,j;
	int len = countLength(letters);

	for(i = 0; i < len; i++){
		if(letters[i] == target){
			for(j = i; j < len; j++)
				letters[j] = letters[j+1];
		}
	}
}

void printCharArray(char array[],int len){
	int i;
	for(i = 0; i < len; i++){
		printf("%c",array[i]);
	}
	printf("\n");
}
