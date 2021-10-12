#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct str {
	char s;
	struct str *back; //一つ手前の構造体のポインタ
} sstr;

int main(){
	sstr *root, *end, *cur_p, *pre_p, *p;
	char input_str[20];
	printf("文字1行を入力:");
	fgets(input_str,20,stdin);
	if(input_str[strlen(input_str)-1] == '\n')
		input_str[strlen(input_str)-1] = '\0';

	for(int i = 0; i < strlen(input_str); i++){
		cur_p = malloc(sizeof(sstr));
		if(i == 0){
			root = cur_p;
			root->back = NULL;
			pre_p = root;
		} else if(i == strlen(input_str)-1){
			end = cur_p;
			end->back = pre_p;
		} else {
			cur_p->back = pre_p;
		}
		cur_p->s = input_str[i];
		pre_p = cur_p;
	}

	while(end != NULL){
		p = end;
		end = p->back;
		printf("%c",(char)p->s);
		free(p);
	}
	printf("\n");

	return 0;
}
