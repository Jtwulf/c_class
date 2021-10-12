#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

void put_list(struct node *p);
void put_list_recursive(struct node *p);

int main(void)
{
  struct node e1,e2,e3,e4,e5;
  struct node *p;

  e1.value = 10;
  e2.value = 20;
  e3.value = 30;
  e4.value = 40;
  e5.value = 50;
  p = &e1;
  e1.next = &e2;
  e2.next = &e3;
  e3.next = &e4;
  e4.next = &e5;
  e5.next = NULL;

  printf("ポインタ p から始まるリストを出力します。\n");
  put_list(p);
  putchar('\n');
  printf("再帰呼び出しを用いてもう１回 ポインタ p から始まるリストを出力します。\n");
  put_list_recursive(p);


  return 0;
}


void put_list(struct node *q)
{
  while (q != NULL) {
    printf("%2d ", q->value);
    q = q->next;
  }
}

/* ここに関数 put_list_recursive を記述します。 */
