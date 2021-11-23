#include <stdio.h>
#include <stdlib.h>

#define FIRST 0
#define BUFSIZE 100
#define WORDSIZE 31

int buf[BUFSIZE];
int bufp = 0;

typedef struct element {
  int value;
  struct element *next;
} element_type;

void putlist(element_type *q);
element_type *getlist(void);
int getint(void);
element_type *eraselist(element_type *p);
element_type *delete(element_type *top, int val);

int main(void) {
  element_type *root;
  int del_num;
  printf("繝ｪ繧ｹ繝医↓蜈･繧後ｋ豁｣謨ｴ謨ｰ繧貞�蜉帙＠縺ｦ荳九＆縺��\n");
  printf("蜈･蜉帙� 0 莉･荳九�謨ｴ謨ｰ繧貞�蜉帙＠縺溘→縺阪↓邨ゅｏ繧翫∪縺兔n");
  root = getlist();

  printf("縺ｧ縺阪≠縺後▲縺溘Μ繧ｹ繝医ｒ蜃ｺ蜉帙＠縺ｾ縺吶�\n");
  putlist(root);

  printf("繝ｪ繧ｹ繝医�荳ｭ縺ｮ謖�ｮ壹＆繧後◆隕∫ｴ�繧帝勁蜴ｻ縺励∪縺吶�\n");
  printf("隕∫ｴ�蛟､繧貞�蜉幢ｼ� ");
  del_num = getint();
  root = delete(root, del_num);
  putlist(root);

  printf("繝ｪ繧ｹ繝医ｒ豸亥悉縺励∪縺吶�\n");
  root = eraselist(root);

  return 0;
}

element_type *getlist(void)
{
  element_type *p, *cur_p, *pre_p;
  int num, count, kind;
  char word[WORDSIZE];

  p = NULL;
  count = FIRST;
  printf("隕∫ｴ�蛟､繧貞�蜉幢ｼ� ");
  num = getint();
  while (num > 0) {
    cur_p = (element_type *)malloc(sizeof (element_type));
    if (count == FIRST) {
      p = cur_p;
    } else {
      pre_p->next = cur_p;
    }
    cur_p->value = num;
    cur_p->next = NULL;
    pre_p = cur_p;
    count++;
    printf("隕∫ｴ�蛟､繧貞�蜉幢ｼ� ");
    num = getint();
  }
  return p;
}


void putlist(element_type *q)
{
  while (q != NULL) {
    printf("%2d ", q->value);
    q = q->next;
  }
}

int getint()
{
  int decimal;
  scanf("%d",&decimal);
  return decimal;
}

element_type *eraselist(element_type *p)
{
  element_type *q;

  while (p != NULL) {
    q = p;
    p = p->next;
    free(q);
  }
  return NULL;
}


element_type *delete(element_type *top, int val)
{
  element_type *pre_p, *cur_p;

  if (top->value == val) {
    cur_p = top;
    top = top->next;
    free(cur_p);
  } else {
    pre_p = top;
    cur_p = top->next;
    while (cur_p->value != val) {
      pre_p = cur_p;
      cur_p = cur_p->next;
    }
    pre_p->next = cur_p->next;
    free(cur_p);
  }
  return top;
}
