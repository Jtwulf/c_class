#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
element_type *delete_and_connect(element_type *p, int a, int b);
element_type *delete_and_connect_ver2(element_type *root, int a, int b);
element_type *copy_list(element_type *root);

int main(){
	element_type *root1, *root2;

	printf("リストに入れる整数を入力して下さい\n");
	printf("入力は0以下の整数を入力したときに終わります\n");
	root1 = getlist();
	root2 = copy_list(root1);

	printf("出来上がったリストを入力します\n");
	putlist(root1);
	printf("\n");

	int a, b;
	printf("切り取る要素の下限値 -> ");
	a = getint();
	printf("切り取る要素の上限値 -> ");
	b = getint();
	root1 = delete_and_connect(root1,a,b);
	root2 = delete_and_connect_ver2(root2,a,b);

	printf("新しいリスト : ");
	putlist(root1);
	printf("\n");
	printf("古いリスト : ");
	putlist(root2);
	printf("\n");

	printf("リストを消去します\n");
	root1 = eraselist(root1);
	root2 = eraselist(root2);

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

element_type *copy_list(element_type *root){
	element_type *root_cur, *new_p, *new_cur, *new_pre;
	int count = 1;
	new_cur = root;
	new_p = NULL;

	while(root_cur != NULL){
		if(count == 1)
			new_p = new_cur;
		else
			new_pre->next = new_cur;
		new_cur = (element_type *)malloc(sizeof(element_type));
		new_cur->value = root_cur->value;
		root_cur = root_cur->next;
		new_cur->next = NULL;
		new_pre = new_cur;
		count++;
	}
	return new_p;
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

element_type *delete_and_connect(element_type *root, int a, int b){
	int count = 1;
	element_type *p, *pre_p, *new_pre_p, *temp, *new_root = NULL;
	p = root;

	//切り取る要素が先頭の場合
	while((p->value >= a) && (p->value < b)){
		temp = p;
		root = p = p->next;

		temp->next = NULL;
		if(count == 1)
			new_root = temp;
		else
			new_pre_p->next = temp;
		new_pre_p = temp;
		count ++;

		if(p == NULL){
			return new_root;
		}
	}
	pre_p = root;
	p = p->next;

	//切り取る要素が先頭以外の場合
	while(p != NULL){
		temp = p->next;
		//見つかったら手前の要素から次の要素へ連結
		if((p->value >= a) && (p->value < b)){
			pre_p->next = p->next;

			p->next = NULL;
			if(count == 1)
				new_root = p;
			else
				new_pre_p->next = p;
			new_pre_p = p;
			count++;
		}
		//見つからなかったら手前の要素を更新し次回の探索に備える
		else
			pre_p = p;
		p = temp;
	}
	return new_root;
}

element_type *delete_and_connect_ver2(element_type *root, int a, int b){
	int count = 1;
	element_type *p, *pre_p, *new_pre_p, *temp, *new_root = NULL;
	p = root;

	//切り取る要素が先頭の場合
	while((p->value < a) || (p->value >= b)){
		temp = p;
		root = p = p->next;

		temp->next = NULL;
		if(count == 1)
			new_root = temp;
		else
			new_pre_p->next = temp;
		new_pre_p = temp;
		count ++;

		if(p == NULL){
			return new_root;
		}
	}
	pre_p = root;
	p = p->next;

	//切り取る要素が先頭以外の場合
	while(p != NULL){
		temp = p->next;
		//見つかったら手前の要素から次の要素へ連結
		if((p->value < a) || (p->value >= b)){
			pre_p->next = p->next;

			p->next = NULL;
			if(count == 1)
				new_root = p;
			else
				new_pre_p->next = p;
			new_pre_p = p;
			count++;
		}
		//見つからなかったら手前の要素を更新し次回の探索に備える
		else
			pre_p = p;
		p = temp;
	}
	return new_root;
}
