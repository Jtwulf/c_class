#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
void getlist(element_type **pp);
int getword(char *word, int lim);
int getch(void);
void ungetch(int c);
void eraselist(element_type **pp);
/*   element_type * insert(element_type * top, int val)   */
void insert(element_type ** ptop, int val);

int main(void) {
  element_type *root;
  char word[WORDSIZE];
  int num;


  printf("リストに入れる正整数を小さい順に入力して下さい。\n");
  printf("入力は 0 以下の整数を入力したときに終わります\n");
  getlist(&root);

  printf("できあがったリストを出力します。\n");
  putlist(root);
  putchar('\n');

  printf("これから整数を入力し、小さい順になるように挿入します。\n");
  printf("0以下の値を入力すると終了します。\n");
  printf("要素値を入力＞ ");
  getword(word, BUFSIZE);
  num = atoi(word);
  while (num > 0) {
    insert(&root, num);
    putlist(root);
    putchar('\n');
    printf("要素値を入力＞ ");
    getword(word, BUFSIZE);
    num = atoi(word);
  }

  printf("リストを消去します。\n");
  eraselist(&root);

  return 0;
}

/*   以前のバージョンの insert がここにコメントアウトされています。   */

/*
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
*/

/*   ここに新しい関数 insert を記述します   */
void insert(element_type **ptop, int val){
  element_type *new_p, *cur_p, *pre_p;

  new_p = (element_type *) malloc(sizeof(element_type));
  new_p->value = val;
  if (*ptop == NULL || val < (*ptop)->value) {
    new_p->next = *ptop;
    *ptop = new_p;
  } else {
    pre_p = *ptop;
    cur_p = (*ptop)->next;
    while (cur_p != NULL && cur_p->value < val) {
      pre_p = cur_p;
      cur_p = cur_p->next;
    }
    pre_p->next = new_p;
    new_p->next = cur_p;
  }
}
/*   前問で作成した eraselist も組み込んで下さい。   */

void eraselist(element_type **pp){
	element_type *p;
	while(*pp != NULL){
		p = *pp;
		*pp = (*pp)->next;
		free(p);
	}
}

void getlist(element_type **pp)
{
  element_type *cur_p, *pre_p;
  int num, count, kind;
  char word[WORDSIZE];

  *pp = NULL;
  count = FIRST;
  printf("要素値を入力＞ ");
  getword(word, BUFSIZE);
  num = atoi(word);
  while (num > 0) {
    cur_p = (element_type *)malloc(sizeof (element_type));
    if (count == FIRST) {
      *pp = cur_p;
    } else {
      pre_p->next = cur_p;
    }
    cur_p->value = num;
    cur_p->next = NULL;
    pre_p = cur_p;
    count++;
    printf("要素値を入力＞ ");
    getword(word, BUFSIZE);
    num = atoi(word);
  }
}


void putlist(element_type *q)
{
  while (q != NULL) {
    printf("%2d ", q->value);
    q = q->next;
  }
}

int getword(char *word, int lim)
{
  int c;
  char *w = word;

  while (isspace(c = getch()))
    ;
  if (c != EOF) {
    *w++ = c;
  }
  if (!isalnum(c) && c != '+' && c != '-') {
      *w = '\0';
      return c;
  } else if (isalpha(c)) {
      for ( ; --lim > 0; w++) {
        if (!isalnum(*w = getch())) {
          ungetch(*w);
          break;
        }
      }
      *w = '\0';
      return word[0];
  } else {
      for ( ; --lim > 0; w++) {
        if (!isdigit(*w = getch())) {
          ungetch(*w);
          break;
        }
      }
      *w = '\0';
      return word[0];
  }
}

int getch(void)
{
  if (bufp > 0) {
    return buf[--bufp];
  } else {
    return getchar();
  }
}

void ungetch(int c)
{
  if (bufp >= BUFSIZE) {
    printf("ungetch : 押し戻す文字が多すぎます\n");
  } else {
    buf[bufp++] = c;
  }
}
