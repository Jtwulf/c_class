#include<stdio.h>
#include<stdlib.h>

typedef struct element {
        int value;
        struct element *next;
} element_type;

int listlen(element_type *p){
        int count = 0;
        while (p != NULL){
                count++;
		p = p->next;
	}
	return count;
}

int main(){
        element_type *cur_p, *root, *pre_p, *p;
        int i, number;
        root = NULL;
	printf("リストの要素数 -> ");
	scanf("%d",&number);
	for(i = 1; i <= number; i++){
		cur_p = (element_type*)malloc(sizeof(element_type));
		if(i == 1)
			root = cur_p;
		else
			pre_p->next = cur_p;
		printf("要素%dの値 -> ",i);
		scanf("%d",&cur_p->value);
		cur_p->next = NULL;
		pre_p = cur_p;
	}
	p = root;
	while(p != NULL){
		printf("%d ",p->value);
		p = p->next;
	}
	printf("\n");
	printf("リストの長さ = %d\n",listlen(root));
	return 0;
}
