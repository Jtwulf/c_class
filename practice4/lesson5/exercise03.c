#include <stdio.h>
#include <string.h>
#define MAXLINE 256

int hex_to_decimal(char *s);
void chomp(char *s);

int main(void)
{
  int n;
  char s[MAXLINE];

  printf("16進数を入力して下さい : ");
  fgets(s, MAXLINE, stdin);
  chomp(s);
  printf("%s を 10進数で表すと ", s);
  n = hex_to_decimal(s);
  printf("%d です\n", n);

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

/* ここに関数 hex_to_decimal を記述する。 */
