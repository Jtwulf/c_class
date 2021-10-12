#include<stdio.h>

void show(char str[]);
int countLength(char array[]);

int main(){
	char array[] = "zabcdef";
	show(array);
	return 0;
}

void show(char str[]){
	int len = countLength(str), min_index = 0, max_index = 0;
	for(int i = 0; i < len; i++){
		if(str[i] < str[min_index])
			min_index = i;
		if(str[i] > str[max_index])
			max_index = i;
	}

	if(min_index > max_index){
		int buf = min_index;
		min_index = max_index;
		max_index = buf;
	}

	for(int j = min_index; j <= max_index; j++){
		printf("%c",str[j]);
	}
	printf("\n");
}

int countLength(char array[]){
	int i = 0;
	while(array[i] != '\0')
		i++;
	return i;
}
