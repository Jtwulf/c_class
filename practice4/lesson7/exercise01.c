#include <stdio.h>

#define MAXSIZE 60
#define M 50

struct large_int {
  int max_index;
  int body[MAXSIZE];
} ;

void set_one(struct large_int *p);
void multiply(struct large_int *p, int n);
void put_large_int(struct large_int a);

int main(void)
{
  struct large_int a;
  int k;

  set_one(&a);                    /* a に 1 をセットする */
  for (k = 1; k <= M; k++) {
    multiply(&a, k);              /* a を k 倍する  */
  }
  printf("%d! = ", M);
  put_large_int(a);               /*  a を標準出力に出力する  */
  putchar('\n');
  return 0;
}

void set_one(struct large_int *p)
{
  p->body[0] = 1;
  p->max_index = 0;
}

void multiply(struct large_int *p, int n){
	if(p->body[p->max_index] > 100)
		p->max_index ++;
	for(int i = 0; i < p->max_index; i++){
		p->body[i] *= n;
		if(p->body[i] > 100){
			p->body[i+1] += p->body[i] / 100;
			p->body[i] = p->body[i] % 100;
		}
	}
}

void put_large_int(struct large_int a){
	for(int i = 0; i < M; i++){
		printf("%d",a.body[i]);
	}
}
