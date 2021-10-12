#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void search_max_min(char str[], char *p_max, char *p_min);

int main(){
	char s[30];
	printf("文字列sを入力> ");
	scanf("%s",s);

	char *max = &s[0], *min = &s[1];
	search_max_min(s,max,min);
	char max_s = *max, min_s = *min;

	for(int i = 0; i < strlen(s); i++){
		if(s[i] == max_s)
			s[i] = min_s;
		else if(s[i] == min_s)
			s[i] = max_s;
	}

	printf("最大文字と最小文字を入れ替えた結果:%s\n",s);

	return 0;
}

void search_max_min(char str[], char *p_max, char *p_min){
	for(int i = 0; i < strlen(str); i++){
		if((int)*p_min > (int)str[i]){
			p_min = &str[i];
		}
		if((int)*p_max < (int)str[i]){
			p_max = &str[i];
		}
	}
}
