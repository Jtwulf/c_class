#include <stdio.h>
#include <string.h>
#define MAXLINE 256

void binary(int n, char *s);

int main(void)
{
  int n;
  char s[MAXLINE];

  printf("正の整数を10進数で入力して下さい : ");
  scanf("%d", &n);
  printf("%d を 2進数で表すと ", n);
  binary(n, s);
  printf("%s です\n", s);

  return 0;
}

/* ここに関数 binary を記述する。 */
