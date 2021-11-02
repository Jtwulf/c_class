#include <stdio.h>

#define MAXSIZE 60

struct large_int {
  int max_index;
  int body[MAXSIZE];
} ;

void set_one(struct large_int *p);
void multiply(struct large_int *p, int n);
void factorial(int n, struct large_int *p);
void power(int m, int n, struct large_int *p);
void put_large_int(struct large_int a);
void large_sum(struct large_int a, struct large_int b, struct large_int *p);


int main(void)
{
  struct large_int a, b, c;
  int k, m, n;

  printf("非負整数を入力して下さい : ");
  scanf("%d", &k);
  factorial(k, &a);
  printf("%d! = ", k);
  put_large_int(a);
  putchar('\n');   /* ここまでで n! を計算  */

  printf("今度は２つの正整数を入力して下さい。 : ");
  scanf("%d %d", &m, &n);
  power(m, n, &b);
  printf("%d^%d = ", m, n);
  put_large_int(b);
  putchar('\n');    /*  ここまでで m^n を計算  */

  large_sum(a, b, &c);    /*  ここで和を計算している  */
  printf("%d! + %d%%%d = ", k, m, n);
  put_large_int(c);
  putchar('\n');

  return 0;
}

void set_one(struct large_int *p)
{
  p->body[0] = 1;
  p->max_index = 0;
}

/*  ここに欠けている関数を記述しよう   */
