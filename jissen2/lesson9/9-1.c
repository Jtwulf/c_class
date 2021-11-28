#include<stdio.h>
#include<stdlib.h>

typedef struct element {
	int value;
	struct element *next;
} element_type;


element_type *getlist(){
	element_type *p, *cur_p, *pre_p;
	int num, count = 1;

	p = NULL;
	printf("要素値を入力してください -> ");
	scanf("%d",&num);
	while(num > 0){
		cur_p = (element_type *)malloc(sizeof(element_type));
		if(count == 1)
			p = cur_p;
		else
			pre_p->next = cur_p;
		cur_p->value = num;
		cur_p->next = NULL;
		pre_p = cur_p;
		count++;
		printf("要素値を入力してください -> ");
		scanf("%d",&num);
	}
	return p;
}

void putlist(element_type *p){
	while(p != NULL){
		printf("%d ",p->value);
		p = p->next;
	}
	printf("\n");
}

element_type * append_list(element_type *root1, element_type *root2){
	element_type *p1, *p2;
	p1 = root1;
	p2 = root2;

	while(p1->next != NULL)
		p1 = p1->next;
	p1->next = p2;
	return root1;
}

void show_end(element_type *root){
	element_type *p;
	p = root;
	while(p->next != NULL)
		p = p->next;
	printf("連結された末尾要素は : %d\n",p->value);
}

element_type *create_even_list(element_type *root){
	element_type *new, *pre, *p;
	int count = 1;
	while(root != NULL){
		if(root->value % 2 == 0){
			new = (element_type *)malloc(sizeof(element_type));
			if(count == 1)
				p = new;
			else
				pre->next = new;
			new->value = root->value;
			new->next = NULL;
			pre = new;
			count++;
		}
		root = root->next;
	}
	return p;
}

int main(){
	element_type *root1, *root2, *new;
	//root1 = (element_type *)malloc(sizeof(element_type));
	//root2 = (element_type *)malloc(sizeof(element_type));

	printf("一つ目のリストを作成します\n");
	root1 = getlist();
	printf("二つ目のリストを作成します\n");
	root2 = getlist();

	printf("作成されたリストを表示します\n");
	printf("list1 : ");
	putlist(root1);
	printf("list2 : ");
	putlist(root2);

	printf("ふたつのリストを連結します\n");
	root1 = append_list(root1,root2);
	putlist(root1);

	show_end(root1);


	printf("偶数要素だけの新リストを表示します\n");
	new = create_even_list(root1);
	putlist(new);

	return 0;
}
