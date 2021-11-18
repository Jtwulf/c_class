#include<stdio.h>
#include<stdlib.h>

#define FIRST 0
#define BUFSIZE 100
#define WORDSIZE 31

int buf[BUFSIZE];
int bufp = 0;

typedef struct element{
	int value;
	struct element *next;
} element_type;

void putlist(element_type *q);
element_type *getlist(void);
int getint(void);
element_type *eraselist(element_type *p);
element_type *delete_element(int value, element_type *root);
element_type *delete_and_connect(element_type root, int a, int b);

int main(){
	element_type *root;

	printf("リストに入れる整数を入力して下さい\n");
	printf("入力は0以下の整数を入力したときに終わります\n");
	root = getlist();

	printf("出来上がったリストを入力します\n");
	putlist(root);
	printf("\n");

	int a, b;
	printf("整数A");
	a = getint();
	printf("整数B");
	b = getint();
	element_type *new_list;
	new_list = delete_and_connect(root,a,b);

	printf("出来上がったリストを入力します\n");
	putlist(new_list);
	printf("\n");

	printf("リストを消去します\n");
	root = eraselist(root);
	new_list = eraselist(new_list);

	return 0;
}

element_type *getlist(void){
	element_type *p, *cur_p, *pre_p;
	int num, count, kind;
	char word[WORDSIZE];

	p = NULL;
	count = FIRST; // FIRST = 0
	printf("要素数を入力 -> ");
	num = getint();
	while(num > 0){
		cur_p = (element_type *)malloc(sizeof(element_type));
		if(count == FIRST){ // つまり、最初の要素の場合
			p = cur_p;
		} else {
			pre_p->next = cur_p; //手前要素に番地を渡す
		}
		cur_p->value = num;
		cur_p->next = NULL;
		pre_p = cur_p;
		count++;
		printf("要素数を入力 -> ");
		num = getint();
	}
	return p;
}

void putlist(element_type *q){
	while(q != NULL){
		printf("%2d ",q->value);
		q = q->next;
	}
}

int getint(){
	int decimal;
	scanf("%d",&decimal);
	return decimal;
}

element_type *eraselist(element_type *p){
	element_type *q;

	while(p != NULL){
		q = p;
		p = p->next;
		free(q);
	}
	return NULL;
}

element_type delete_and_connect(root, a, b){
	element_type *p, *pre_p, *cur_p;

}
