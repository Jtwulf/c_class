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
element_type *delete(element_type *top, int val, int *pst);

int main(void) {
  element_type *root;
  int del_num, pst;
  //pst = (int *)malloc(sizeof(int));
  printf("リストの作成\n");
  root = getlist();

  printf("リストの出力\n");
  putlist(root);

  printf("\n削除したい要素を入力 -> \n");
  del_num = getint();
  root = delete(root, del_num, &pst);
  putlist(root);
  printf("pst = %d\n",pst);

  printf("メモリの開放");
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


element_type *delete(element_type *top, int val, int *pst)
{
  element_type *pre_p, *cur_p;

  //先頭の場合の処理
  if (top->value == val) {
    cur_p = top;
    top = top->next;
    free(cur_p);
  }
   pre_p = top;
   cur_p = top->next;

   while (cur_p != NULL) {
	if(cur_p->value == val){
		pre_p->next = cur_p->next;
		free(cur_p);
		*pst = DELETED;
		return top;
	}
	pre_p = cur_p;
	cur_p = cur_p->next;
   }

   *pst = FAILED;
   return top;
}
