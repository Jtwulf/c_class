#include<stdio.h>
#include<stdlib.h>

typedef struct element{
	int value;
	struct element *next;
} element_type;

element_type *create_clist();
void print_clist(element_type *root);
void free_memory(element_type *root);
element_type *ins_endof_clist(element_type *root, int num);

int main(){
	element_type *root = NULL;
	root = create_clist();
	printf("作成された循環リスト: ");
	print_clist(root);
	int value;
	printf("末尾に追加する要素値 -> ");
	scanf("%d",&value);
	root = ins_endof_clist(root,value);
	printf("作成された循環リスト: ");
	print_clist(root);
	printf("メモリを開放します\n");
	free_memory(root);
	return 0;
}

void print_clist(element_type *root){
	element_type *p = root;
	if(p == NULL){
		printf("空リストです\n");
		return;
	}
	do{
		printf("%d ",p->value);
		p = p->next;
	} while(p != root);
	printf("\n");
}

element_type *create_clist(){
	element_type *pre_p, *cur_p, *root = NULL;
	int count = 1, num;
	printf("要素値を入力 -> ");
	scanf("%d",&num);
	while(num != 0){
		cur_p = (element_type*)malloc(sizeof(element_type));
		if(!cur_p){
			printf("メモリを確保出来ませんでした\n");
			return root;
		}
		if(count == 1)
			root = cur_p;
		else
			pre_p->next = cur_p;
		cur_p->value = num;
		cur_p->next = root; //次のポイントでrootを指す事でリストが循環する
		pre_p = cur_p; //次のループへの準備
		count ++;
		printf("要素値を入力 -> ");
		scanf("%d",&num);
	}
	return root;
}

void free_memory(element_type *root){
	element_type *p, *temp;
	if(root == NULL){
		printf("開放するメモリがありません\n");
		return;
	}
	p = root;
	do{
		temp = p->next;
		free(p);
		p = temp;
	}while(p != root);
}

element_type *ins_endof_clist(element_type *root, int num){
	element_type *last, *new;
	new = (element_type *)malloc(sizeof(element_type));
	last = root;
	while(last != NULL){
		if(last->next->value == root->value)
			break;
		last = last->next;
	}
	last->next = new;
	new->value = num;
	new->next = root;
	return root;
}
