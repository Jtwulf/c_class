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
void new_list(element_type *root1, element_type **list2, double real1, double real2);

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

	double real1, real2;
	printf("GPAの基準点1入力 -> ");
	scanf("%lf",&real1);
	printf("GPAの基準点2入力 -> ");
	scanf("%lf",&real2);

	element_type *new;
	new_list(root,&new,real1,real2);

	printf("GPAがreal1未満またはreal2以上の要素を組み合わせて出来たリストは : ");
	putlist(new);

	printf("メモリの開放\n");
	root = eraselist(root);

	return 0;
}

void new_list(element_type *root1, element_type **list2, double real1, double real2){
	element_type *p, *cur_p, *pre_p;
	int count = 0;
	p = *list2;

	while(root1 != NULL){
		if(root1->data.GPA < real1 || real2 <= root1->data.GPA){
			cur_p = (element_type *)malloc(sizeof (element_type));
			if (count == 0) {
				p = cur_p;
			} else {
				pre_p->next = cur_p;
			}
			cur_p->data.GPA = root1->data.GPA;
			strcpy(cur_p->data.name,root1->data.name);
			cur_p->next = NULL;
			pre_p = cur_p;
			count++;
		}
		root1 = root1->next;
	}
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
	int count, kind, i = 1;
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
		i++;
	}
	return p;
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
