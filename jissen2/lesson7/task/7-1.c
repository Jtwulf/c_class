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

int main(){
	element_type *root;

	printf("リストに入れる整数を入力して下さい\n");
	printf("入力は0以下の整数を入力したときに終わります\n");
	root = getlist();

	printf("出来上がったリストを入力します\n");
	putlist(root);
	printf("\n");

	printf("削除したい要素を入力してください -> ");
	int value = getint();
	root = delete_element(value,root);

	printf("出来上がったリストを入力します\n");
	putlist(root);
	printf("\n");

	printf("リストを消去します\n");
	root = eraselist(root);

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

element_type *delete_element(int value, element_type *root){
	element_type *p, *pre_p, *temp;
	p = root;

	//削除しようとする要素がリストの先頭にある場合
	while(root->value == value){
		temp = root;
		temp = temp->next;
		free(root);
		return temp;
	}
	pre_p = root;
	p = p->next;

	//削除したい要素がリストの先頭以外の場合
	while(p != NULL){
		//見つかったら一つ前の要素から次の要素へ連結
		if(p->value == value){
			temp = p;
			pre_p->next = temp->next;
			free(p);
		}
		//見つからなかったら一つ前の要素を更新し
		//次回の探索に備える
		else
			pre_p = p;
		p = p->next;
	}
	return root;
}
