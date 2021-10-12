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
	printf("%c,%c\n",*max,*min);
	for(int i = 0; i < strlen(s); i++){
		if(s[i] == *max)
			s[i] = *min;
		if(s[i] == *min)
			s[i] = *max;
	}

	printf("%s\n",s);

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
