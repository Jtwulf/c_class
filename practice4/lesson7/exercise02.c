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

int main(void)
{
  struct large_int a, b;
  int m, n;

  printf("非負整数を入力して下さい : ");
  scanf("%d", &n);
  factorial(n, &a);   /*  ここで n! を計算  */
  printf("%d! = ");
  put_large_int(a);
  putchar('\n');

  printf("今度は２つの正整数を入力して下さい。 : ");
  scanf("%d %d", &m, &n);
  power(m, n, &b);                /* ここで m^n を計算  */
  printf("%d^%d = ", m, n);
  put_large_int(b);
  putchar('\n');

  return 0;
}

void set_one(struct large_int *p)
{
  p->body[0] = 1;
  p->max_index = 0;
}

/*  ここに欠けている関数を記述しよう  */
