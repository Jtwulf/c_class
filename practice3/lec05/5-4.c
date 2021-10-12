#include<stdio.h>
#include<string.h>

#define N 1024

int different_number(char word[]);

int main(){
	char word[N];
	printf("word -> ");
	scanf("%s",word);

	printf("%d\n",different_number(word));
	return 0;
}

int different_number(char word[]){
	int len = strlen(word);
	int flag ,sum = 0;

	for(int i = 0; i < len; i++){
		flag = 0;
		for(int j = i-1; j >= 0; j--){
			if(word[i] == word[j])
				flag = 1;
		}
		if(flag == 0)
			sum ++;
	}
	return sum;
}
