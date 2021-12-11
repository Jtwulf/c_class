#include <stdio.h>
#include <stdlib.h>

#define FIRST 0
#define BUFSIZE 100
#define WORDSIZE 31
#define DELETED 1
#define FAILED 0

int buf[BUFSIZE];
int bufp = 0;

typedef struct element {
  int value;
  struct element *next;
} element_type;

void putlist(element_type *q);
element_type *getlist(void);
int getint(void);
element_type *eraselist(element_type *p);
element_type *add_to_end(element_type *root, int num);
element_type *add_to_top(element_type *root, int num);
element_type *create_list(element_type *root);

int main(void) {
  element_type *root;
  //root = getlist();
  root = NULL;

  root = create_list(root);

  putlist(root);
  printf("\n");

  printf("メモリの開放");
  root = eraselist(root);

  return 0;
}

element_type *create_list(element_type *root){
	int num;
	printf("要素値を入力 -> ");
	num = getint();
	while(num > 0){
		if(num % 2 == 0){
			root = add_to_end(root,num);
		} else if(num % 2 == 1){
			root = add_to_top(root,num);
		}
		printf("要素値を入力 -> ");
		num = getint();
	}
	return root;
}

element_type *add_to_top(element_type *root, int num){
	element_type *p, *cur;
	p = root;
	cur = (element_type *)malloc(sizeof(element_type));
	cur->value = num;
	cur->next = p;
	return cur;
}

element_type *add_to_end(element_type *root, int num){
	element_type *p, *cur;
	p = root;
	cur = (element_type *)malloc(sizeof(element_type));
	cur->value = num;
	cur->next = NULL;
	while(p->next != NULL)
		p = p->next;
	p->next = cur;
	return root;
}

element_type *getlist(void)
{
  element_type *p, *cur_p, *pre_p;
  int num, count, kind;
  char word[WORDSIZE];

  p = NULL;
  count = FIRST;
  printf("要素値を入力してください -> ");
  num = getint();
  while (num > 0) {
    cur_p = (element_type *)malloc(sizeof (element_type));
    if (count == FIRST) {
      p = cur_p;
    } else {
      pre_p->next = cur_p;
    }
    cur_p->value = num;
    cur_p->next = NULL;
    pre_p = cur_p;
    count++;
    printf("要素値を入力してください -> ");
    num = getint();
  }
  return p;
}


void putlist(element_type *q)
{
  while (q != NULL) {
    printf("%2d ", q->value);
    q = q->next;
  }
}

int getint()
{
  int decimal;
  scanf("%d",&decimal);
  return decimal;
}

element_type *eraselist(element_type *p)
{
  element_type *q;

  while (p != NULL) {
    q = p;
    p = p->next;
    free(q);
  }
  return NULL;
}
