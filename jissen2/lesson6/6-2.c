#include<stdio.h>
#include<stdlib.h>

typedef struct element{
	int value;
	struct element *next;
} element_type;

int main(){
	element_type *cur_p, *root, *pre_p, *p, *temp, *similar;
	int i, number, val, num, min;
	root = NULL;
	i = 1;
	printf("要素数を入力 -> ");
	scanf("%d",&num);
	while(num != 0){
		cur_p = (element_type*)malloc(sizeof(element_type));
		if(i == 1)
			root = cur_p;
		else
			pre_p->next = cur_p;
		cur_p->value = num;
		cur_p->next = NULL;
		pre_p = cur_p;
		i++;
		printf("要素数を入力 -> ");
		scanf("%d",&num);
	}
	p = root;
	printf("挿入前のリスト -> ");
	while(p != NULL){
		printf("%d ",p->value);
		p = p->next;
	}
	printf("\n");

	cur_p = (element_type*)malloc(sizeof(element_type));
	printf("挿入する要素の値 -> ");
	scanf("%d",&cur_p->value);

	p = root;
	if(p == NULL){
		printf("リストが空です");
		return 0;
	}
	min = abs(p->value - cur_p->value);
	similar = p;
	p = p->next;
	while(p != NULL){
		if(min > abs(p->value - cur_p->value)){
			min = abs(p->value - cur_p->value);
			similar = p;
		}
		p = p->next;
	}

	temp = similar->next;
	similar->next = cur_p;
	cur_p->next = temp;

	while(root != NULL){
		p = root;
		root = p->next;
		printf("%d",p->value);
		free(p);
	}
	return 0;
}
