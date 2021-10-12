#include<stdio.h>
#include<stdlib.h>
#include<time.h>

char char_extract(char str[]);
int countLength(char letters[]);
void removeNewline(char letters[]);

int main(){
	srand((unsigned)time(NULL));

	char letters[5];
	int i, n = 5;
	for(i = 0; i < n; i++){
		char str[80];
		printf("文字列%dを入力:",i+1);
		fgets(str,80,stdin);
		removeNewline(str);
		letters[i] = char_extract(str);
	}

	printf("新しい文字列: ");
	int j;
	for(j = 0; j < n; j++){
		printf("%c",letters[j]);
	}
	printf("\n");
	return 0;
}

char char_extract(char str[]){
	int max = countLength(str);
	int i = rand()%max;
	printf("順番%d 表記%c\n",i+1,str[i]);
	return str[i];
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
