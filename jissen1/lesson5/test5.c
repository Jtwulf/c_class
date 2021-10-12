#include<stdio.h>

int countLength(char letters[]);
void removeNewline(char letters[]);

int main(){
	int suji = 0,komoji = 0,omoji = 0,sonota = 0;
	char letters[20];
	fgets(letters,20,stdin);
	int len = countLength(letters);
	removeNewline(letters);

	int i;
	for(i = 0; i < len; i++){
		if(48 <= letters[i] && letters[i] <= 57)
			suji ++;
		if(97 <= letters[i] && letters[i] <= 122)
			komoji ++;
		if(65 <= letters[i] && letters[i] <= 90)
		        omoji++;
		if((33 <= letters[i] && letters[i] <= 47) || (58 <= letters[i] && letters[i] <= 64) || (91 <= letters[i] && letters[i] <= 96) || (123 <= letters[i] && letters[i] <= 126)) 
			sonota ++;
	}

	printf("数字%d,英小文字%d,英大文字%d,その他記号%d\n",suji,komoji,omoji,sonota);
	return 0;
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
