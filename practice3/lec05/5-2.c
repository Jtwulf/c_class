#include<stdio.h>

int is_palindrome(char word[]);
int countLength(char array[]);

int main(){
	char word[] = "abcca";
	printf("%d\n",is_palindrome(word));
	return 0;
}

int is_palindrome(char word[]){
	int i, len = countLength(word);
	char rWord[len];
	for(i = 0; i < len/2; i++)
		if(word[len-i-1] != word[i])
			return 0;
	return 1;
}

int countLength(char array[]){
	int i;
	while(array[i] != '\0')
		i++;
	return i;
}

