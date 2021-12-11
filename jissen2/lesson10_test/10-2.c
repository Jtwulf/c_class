#include<stdio.h>
#include<stdlib.h>

#define FIRST 0
#define BUFSIZE 100
#define WORDSIZE 31

int buf[BUFSIZE];
int bufp = 0;

typedef struct element{
	int value;
	struct element *next; //一つ先の要素へのポインタ
	struct element *prev; //一つ手前の要素へのポインタ
} element_type;

void putlist(element_type *q);
element_type *getlist(void);
int getint(void);
element_type *eraselist(element_type *p);
void *left_and_right(element_type *root);
int distance_left(element_type *root, int num);
int distance_right(element_type *root, int num);

int main(){
	element_type *root;
	int num;

	printf("リストに入れる整数を入力して下さい\n");
	printf("入力は0以下の整数を入力したときに終わります\n");
	root = getlist();

	printf("出来上がったリストを入力します\n");
	putlist(root);
	printf("\n");

	/*
	element_type *p = root->next->next;
	left_and_right(p);
	*/
	/*
	printf("入力された値と先頭要素の距離を調べます\n");
	num = getint();
	printf("距離 : %d\n", distance_left(root,num));
	*/
	
	printf("入力された値と末尾要素の距離を調べます\n");
	num = getint();
	printf("距離 : %d\n", distance_right(root,num));
	

	printf("リストを消去します\n");
	root = eraselist(root);

	return 0;
}

int distance_right(element_type *root, int num){
	int count = 0;
	while(root->next != NULL){
		root = root->next;
	}
	while(root->value != num){
		root = root->prev;
		count++;
	}
	return count;
}

int distance_left(element_type *root, int num){
	int count = 0;
	while(root->value != num){
		root = root->next;
		count ++;
	}
	return count;
}

void *left_and_right(element_type *root){
	if(root->prev != NULL)
		printf("一つ手前の要素 : %d\n", root->prev->value);
	if(root->next != NULL)
		printf("一つ先の要素 : %d\n", root->next->value);
	return NULL;
}

element_type *getlist(void){
	int num, count = 1;
	element_type *pre_p, *cur_p, *root;
	printf("要素数を入力 -> ");
	scanf("%d",&num);
	while(num != 0){
		cur_p = (element_type *)malloc(sizeof(element_type));
		cur_p->value = num;
		cur_p->next = NULL;
		if(count == 1){
			root = cur_p;
			cur_p->prev = NULL;
		} else {
			pre_p->next = cur_p;
			cur_p->prev = pre_p;
		}
		pre_p = cur_p;
		count ++;
		printf("要素数を入力 -> ");
		scanf("%d",&num);
	}
	return root;
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
