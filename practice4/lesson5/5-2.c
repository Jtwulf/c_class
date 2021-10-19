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

void binary(int n, char *s){
	int p;

	if(n >= 1){
		binary(n/2, s);
		p = strlen(s);
		s[p] = n % 2 + 48;
		s[p+1] = '\0';
	} else {
		s[0] = '\0';
	}
}
