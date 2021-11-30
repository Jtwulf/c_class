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
  struct element *prev;
} element_type;

void putlist(element_type *q);
void putlist_reverse(element_type *top);
void getlist(element_type **pp);
int getword(char *word, int lim);
int getch(void);
void ungetch(int c);
void eraselist(element_type **pp);
int delete(element_type **ptop, int val);

int main(void) {
  element_type *root;
  char word[WORDSIZE];
  int num, status;


  printf("リストに入れる正整数を入力して下さい。\n");
  printf("入力は 0 以下の整数を入力したときに終わります\n");
  getlist(&root);

  printf("できあがったリストを出力します。\n");
  putlist(root);
  putchar('\n');

  printf("prev が正しくつながっていることを確認します。\n");
  printf("リストの最後から prev をたどって逆順でリストを出力します。\n");
  putlist_reverse(root);
  putchar('\n');


  printf("これから指定した要素を削除します。\n");
  printf("0以下の値を入力すると終了します。\n");
  printf("削除する要素値を入力＞ ");
  getword(word, BUFSIZE);
  num = atoi(word);
  while (num > 0) {
    status = delete(&root, num);
    if (status == DELETED) {
      printf("削除しました。\n");
    } else {
      printf("%2d はリストにありません。\n",num);
    }
    putlist(root);
    putchar('\n');
    printf("削除する要素値を入力＞ ");
    getword(word, BUFSIZE);
    num = atoi(word);
  }

  printf("今のリストを出力します。\n");
  putlist(root);
  putchar('\n');

  printf("prev が正しくつながっていることを確認します。\n");
  printf("リストの最後から prev をたどって逆順でリストを出力します。\n");
  putlist_reverse(root);
  putchar('\n');

  printf("リストを消去します｡\n");
  eraselist(&root);

  return 0;

}

/*  ここに関数 delete, getlist, eraselist を記述します｡  */

void putlist(element_type *q)
{
  while (q != NULL) {
    printf("%2d ", q->value);
    q = q->next;
  }
}

void putlist_reverse(element_type *top)
{
  element_type *q;

  q = top;
  if (q != NULL) {
    while (q->next != NULL) {
      q = q->next;
    }
    while (q != top) {
      printf("%2d ", q->value);
      q = q->prev;
    }
  }
  printf("%2d ", top->value);
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
