#include <stdio.h>
#include <string.h>
#include<math.h>
#define MAXLINE 256

int decimal(char *s, int n);
void chomp(char *s);

int main(void)
{
  int n;
  char s[MAXLINE];

  printf("２進数を入力して下さい : ");
  fgets(s, MAXLINE, stdin);
  chomp(s);
  printf("%s を 10進数で表すと ", s);
  n = decimal(s,0);
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

int decimal(char *s, int n){
	if(*s == '\n')
		return n;
	if(*s == '1')
		n += (int)pow(2,*s-s[0]);
}
