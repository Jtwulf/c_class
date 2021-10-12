#include<stdio.h>

int search(char str[], char c);
int countLength(char letters[]);

int main(){
	char str[256],c,pos;
	printf("input string:");
	fgets(str,256,stdin);
	printf("input character:");
	scanf("%c",&c);
	pos = search(str,c);
	if(pos >= 0)
		printf("the character %c is str[%d]\n",c,pos);
	else 
		printf("no match!\n");
	return 0;
}

int search(char str[], char c){
	int i = 0; 
	int len = countLength(str);

	while(str[i] != '\0'){
		if(str[i] == c)
			return i;
		i++;
	}
	return -1;
}

int countLength(char letters[]){
	int i = 0;
	while(letters[i] != '\0')
		i++;
	return i;
}
