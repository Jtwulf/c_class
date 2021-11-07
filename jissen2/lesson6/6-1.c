#include<stdio.h>
#include<stdlib.h>

typedef struct element{
	int value;
	struct element *next;
} element_type;

int main(){
	element_type *cur_p, *root, *pre_p, *p, *temp;
	int i, number, val;
	root = NULL;
	//任意の長さでリスト作成
	printf("リストの要素数 -> ");
	scanf("%d",&number);
	for(i = 0; i <= number; i++){
		cur_p = (element_type*)malloc(sizeof(element_type));
		if(i == 0)
			root = cur_p;
		else
			pre_p->next = cur_p;
		printf("要素%dの値 -> ",i);
		scanf("%d",&cur_p->value);
		cur_p->next = NULL;
		pre_p = cur_p;
	}
	//リスト出力
	p = root;
	while(p != NULL){
		printf("%d ",p->value);
		p = p->next;
	}
	printf("\n");

	//リストに挿入する要素の生成
	cur_p = (element_type*)malloc(sizeof(element_type));
	printf("挿入する要素の値 -> ");
	scanf("%d", &cur_p->value);

	//挿入位置を特定する為の値を入力
	printf("どの値の後に挿入するか -> ");
	scanf("%d",&val);

	//挿入位置の探索を挿入の実行
	p = root;
	while(p != NULL){
		if(p->value == val){
			temp = p->next;
			p->next = cur_p;
			cur_p->next = temp;
			break; //挿入位置が見つかったら終了
		}
		p = p->next;
	}

	//挿入後のリストを出力しつつメモリを解放
	while(root != NULL){
		p = root;
		root = p->next;
		printf("%d ",p->value);
		free(p);
	}

	return 0;
}
