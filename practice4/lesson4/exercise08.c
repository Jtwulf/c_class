#include <stdio.h>

struct node {
  int value;
  struct node *next;
};

void put_list_from_last(struct node *list);
void put_list(struct node *list);

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
  printf("今度は逆順から出力します。\n");
  put_list_from_last(p);

  return 0;
}

void put_list(struct node *q)
{
  if (q != NULL) {
    printf("%2d ", q->value);
    put_list(q->next);
  }
}

/* ここに関数 put_list_from_last を記述する。 */
