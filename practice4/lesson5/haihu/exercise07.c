#include <stdio.h>
#include <string.h>

#define N 30
#define MAXLINE 255

struct node {
  char name[N];
  int score;
  struct node *next;
};

void put_list(struct node *list);
void chomp(char *s);
struct node * search_by_score(struct node *p, int d);



int main(void)
{
  struct node e1, e2, e3, e4, e5, e6, e7;
  struct node *p, *q;
  int x;

  strcpy(e1.name, "Adam");
  e1.score = 72;
  strcpy(e2.name, "Betty");
  e2.score = 83;
  strcpy(e3.name, "Cathy");
  e3.score = 54;
  strcpy(e4.name, "David");
  e4.score = 83;
  strcpy(e5.name, "Elizabeth");
  e5.score = 92;
  strcpy(e6.name, "Fred");
  e6.score = 83;
  strcpy(e7.name, "Gary");
  e7.score = 80;
  p = &e1;
  e1.next = &e2;
  e2.next = &e3;
  e3.next = &e4;
  e4.next = &e5;
  e5.next = &e6;
  e6.next = &e7;
  e7.next = NULL;

  printf("ポインタ p から始まるリストを出力します。\n");
  put_list(p);

  printf("得点を入力して下さい : ");
  scanf("%d", &x);
  q = search_by_score(p, x);
  if (q != NULL) {
    printf("%d の 得点をとった人は %s です\n", q->score, q->name);
  } else {
    printf("%d の得点をとった人はリストの中にいません。\n", x);
  }
  return 0;
}

void put_list(struct node *q)
{
  while (q != NULL) {
    printf("%s : %d\n", q->name, q->score);
    q = q->next;
  }
}

void chomp(char *s)
{
  int p;

  p = strlen(s);
  if (s[p-1] == '\n') {
    s[p-1] = '\0';
  }
}

/* ここに関数 search_by_score を記述します */
