#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct element {
	struct health_paper {
		char name[30];
		double GPA;
	} data;
	struct element *next;
} element_type;

element_type *create_list(element_type *root);
void putlist(element_type *q);
element_type *eraselist(element_type *p);
element_type *add_list(element_type *root, double num, char name[]);
element_type *getlist(void);
char *element_name(element_type *root, int num);
void show_number(element_type *root, double real);

int main(){
	element_type *root;
	root = getlist();

	printf("リストは : ");
	putlist(root);
	printf("\n");

	printf("先頭からの順番を入力 -> ");
	int num;
	scanf("%d",&num);
	char word[30];
	printf("%d番目の氏名は : %s\n",num,element_name(root,num));

	double real;
	printf("GPAの基準点入力 -> ");
	scanf("%lf",&real);
	show_number(root,real);

	printf("メモリの開放\n");
	root = eraselist(root);

	return 0;
}

void show_number(element_type *root, double real){
	element_type *p = root;
	int count = 0;
	while(p != NULL){
		if(p->data.GPA < real)
			count ++;
		p = p->next;
	}
	printf("GPA基準点未満の人数は　: %d\n",count);
}

char *element_name(element_type *root, int num){
	element_type *p = root;
	int i = 1;
	char word[30];
	while(p != NULL && i < num){
		p = p->next;
		i++;
	}
	return p->data.name;
}


element_type *getlist(void){
	element_type *p, *cur_p, *pre_p;
	int count, kind;
	double num;
	char word[30];

	p = NULL;
       	count = 0;
	printf("氏名 GPA -> ");
	scanf("%s %lf",word, &num);

	while (num > 0) {
	       	cur_p = (element_type *)malloc(sizeof (element_type));
		if (count == 0) {
			p = cur_p;
		} else {
			pre_p->next = cur_p;
		}
		cur_p->data.GPA = num;
		strcpy(cur_p->data.name,word);
		cur_p->next = NULL;
		pre_p = cur_p;
		count++;
		printf("氏名 GPA -> ");
		scanf("%s %lf",word, &num);
	}
	return p;
}


element_type *create_list(element_type *root){
	double num;
	char name[30];
	printf("GPAを入力 -> ");
	scanf("%lf",&num);
	printf("nameを入力 -> ");
	scanf("%s",name);
	while(num > 0){
		root = add_list(root,num,name);
		printf("要素値を入力 -> ");
		scanf("%lf",&num);
		printf("nameを入力 -> ");
		scanf("%s",name);
	}
	return root;
}

element_type *add_list(element_type *root, double num, char name[]){
	element_type *p, *cur;
	p = root;
	cur = (element_type *)malloc(sizeof(element_type));
	cur->data.GPA = num;
	strcpy(cur->data.name, name);
	cur->next = NULL;
	while(p->next != NULL)
		p = p->next;
	p->next = cur;
	return root;
}

void putlist(element_type *q){
  while (q != NULL) {
    printf("%s ", q->data.name);
    q = q->next;
  }
}

element_type *eraselist(element_type *p){
  element_type *q;

  while (p != NULL) {
    q = p;
    p = p->next;
    free(q);
  }
  return NULL;
}
