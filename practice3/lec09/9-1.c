#include<stdio.h>

void min_asc(char s[], int len);

int main(){
	char s [] = "J2ustin";
	min_asc(s,6);
	return 0;
}

void min_asc(char s[], int len){
	int min_index = 0;
	for(int i = 0; i < len; i++){
		if(s[min_index] >= s[i])
			min_index = i;
	}
	if(65 <= s[min_index] && s[min_index] <= 90)
		printf("添字：%d, 文字種：英大文字\n",min_index);
	else if(97 <= s[min_index] && s[min_index] <= 122)
		printf("添字：%d, 文字種：英小文字\n",min_index);
	else if(48 <= s[min_index] && s[min_index] <= 57)
		printf("添字：%d, 文字種：数字\n",min_index);
	else
		printf("添字：%d,文字種：その他\n",min_index);
}
