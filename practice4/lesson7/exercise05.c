#include <stdio.h>
#include <string.h>

#define MAXSIZE 60
#define MAXLINE 255

struct large_int {
  int max_index;
  int body[MAXSIZE];
} ;

void put_large_int(struct large_int a);
void large_subtract(struct large_int a, struct large_int b, struct large_int *p);
void get_large_int(struct large_int *p);
void chomp(char *s);
void multiply(struct large_int *p, int n);


int main(void)
{
  struct large_int a, b, c;

  printf("１つめの非負整数を入力して下さい : ");
  get_large_int(&a);
  printf("a= ");
  put_large_int(a);
  putchar('\n');

  printf("２つめの非負整数を入力して下さい : ");
  get_large_int(&b);
  printf("b= ");
  put_large_int(b);
  putchar('\n');

  large_subtract(a, b, &c);  /*  ここで引き算している  */
  printf("a - b = ");
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

/*  ここに欠けている関数を記述すること  */
/*  プロトタイプにない関数を新たに作成してもよい  */
