#include<stdio.h>
#include<string.h>

void str_max_min(char str[], int *max, int *min);

int main(){
	char str[100];
	printf("文字列str> ");
	scanf("%s",str);
	int max = str[0], *max_p = &max, min = str[0], *min_p = &min;

	str_max_min(str,max_p,min_p);

	int i;
	for(i = 0; i < strlen(str); i++){
		if(*max_p == str[i]){
			printf("最大文字:%c\n",str[i]);
		}
	}
	for(i = 0; i < strlen(str); i++){
		if(*min_p == str[i]){
			printf("最小文字:%c\n",str[i]);
		}
	}
	return 0;
}

void str_max_min(char str[], int *max, int *min){
	int i;
	for(i = 0; i < strlen(str); i++){
		if(*max < str[i]){
			*max = str[i];
		}
		if(*min > str[i]){
			*min = str[i];
		}
	}

}
