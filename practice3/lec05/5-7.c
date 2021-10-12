#include<stdio.h>
#include<string.h>

char freq_char(char word[]);

int main(){
	char word[] = "vimmer";
	printf("%c\n",freq_char(word));
	return 0;
}

char freq_char(char word[]){
	int len = strlen(word);
	int count[len];
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			if(word[i] == word[j])
				count[i]++;
		}
	}
	int i, max_index = 0;
	for(i = 0; i < len; i++){
		if(count[max_index] < count[i])
			max_index = i;
	}
	return word[max_index];
}
