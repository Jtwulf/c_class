#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define DELETED 1
#define BUFSIZE 100
#define WORDSIZE 31
#define FIRST 0
#define FAILED 0

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
int delete_top(element_type **pp);

int main(void) {
  element_type *root;
  char word[WORDSIZE];
  int status;


  printf("リストに入れる正整数を入力して下さい。\n");
  printf("入力は 0 以下の整数を入力したときに終わります\n");
  getlist(&root);

  printf("できあがったリストを出力します。\n");
  putlist(root);
  putchar('\n');

  printf("リストの中の先頭の要素を除去します。\n");
  status = delete_top(&root);
  if (status == FAILED) {
    printf("リストは空です｡\n");
  } else {
    putlist(root);
    putchar('\n');
  }
  return 0;
}

/*   ここに関数 delete_top を記述します。   */
int delete_top(element_type **pp){
	element_type *p;
	if(*pp != NULL){
		p = *pp;
		*pp = (*pp)->next;
		p = NULL;
		return DELETED;
	} else
		return FAILED;
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
