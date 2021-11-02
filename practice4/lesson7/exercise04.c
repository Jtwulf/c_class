#include <stdio.h>
#include <string.h>

#define MAXSIZE 60
#define MAXLINE 255

struct large_int {
  int max_index;
  int body[MAXSIZE];
} ;

void put_large_int(struct large_int a);
void large_sum(struct large_int a, struct large_int b, struct large_int *p);
void get_large_int(struct large_int *p);
void chomp(char *s);
void multiply(struct large_int *p, int n);


int main(void)
{
  struct large_int a, b, c;

  printf("１つめの非負整数を入力して下さい : ");
  get_large_int(&a);    /*  １つめの large_int 型変数の入力  */
  printf("a= ");
  put_large_int(a);
  putchar('\n');

  printf("２つめの非負整数を入力して下さい : ");
  get_large_int(&b);    /*  ２つめの large_int 型変数の入力  */
  printf("b= ");
  put_large_int(b);
  putchar('\n');

  large_sum(a, b, &c);   /*  ２つの和を計算  */
  printf("a + b = ");
  put_large_int(c);
  putchar('\n');

  return 0;
}

void chomp(char *s)
{
  int p;

  p = strlen(s);
  if (s[p-1] == '\n') {
    s[p-1] = '\0';
  }
}

/*  ここに欠けた関数を記述しよう。chomp は必要に応じて利用してもよい  */
/*  プロトタイプにない関数を作成してもよい。その場合プロトタイプにも書き込もう  */
