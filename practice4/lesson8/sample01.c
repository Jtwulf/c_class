#include <stdio.h>
#include <stdlib.h>

#define FIRST 0
#define BUFSIZE 100
#define WORDSIZE 31

int buf[BUFSIZE];
int bufp = 0;

typedef struct element {
  int value;
  struct element *next;
} element_type;

void putlist(element_type *q);
element_type *getlist(void);
int getint(void);
element_type * eraselist(element_type *p);


int main(void) {
  element_type *root;

  printf("リストに入れる正整数を入力して下さい。\n");
  printf("入力は 0 以下の整数を入力したときに終わります\n");
  root = getlist();

  printf("できあがったリストを出力します。\n");
  putlist(root);

  printf("リストを消去します。\n");
  root = eraselist(root);

  return 0;
}

element_type *getlist(void)
{
  element_type *p, *cur_p, *pre_p;
  int num, count, kind;
  char word[WORDSIZE];

  p = NULL;
  count = FIRST;
  printf("要素値を入力＞ ");
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
    printf("要素値を入力＞ ");
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

element_type * eraselist(element_type *p)
{
  element_type *q;

  while (p != NULL) {
    q = p;
    p = p->next;
    free(q);
  }
  return NULL;
}


element_type * insert(element_type * top, int val)
{
  element_type *new_p, *cur_p, *pre_p;

  new_p = (element_type *) malloc(sizeof(element_type));
  new_p->value = val;
  if (top == NULL || val < top->value) {
    new_p->next = top;
    top = new_p;
  } else {
    pre_p = top;
    cur_p = top->next;
    while (cur_p != NULL && cur_p->value < val) {
      pre_p = cur_p;
      cur_p = cur_p->next;
    }
    pre_p->next = new_p;
    new_p->next = cur_p;
  }
  return top;
}
