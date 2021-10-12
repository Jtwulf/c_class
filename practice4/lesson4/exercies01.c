#include <stdio.h>
#include <string.h>
#define LEFT 0
#define RIGHT 1

struct health_paper {
  char name[30]; /* 氏名*/
  int birthday; /* 生年月日*/
  double height; /* 身長*/
  double weight; /* 体重*/
  double sight[2]; /* 視力*/
};

int main(void)
{
  struct health_paper person;
  struct health_paper *p;

  p = &person;
  strcpy(person.name,"日大太郎");
  person.birthday = 19960401;
  person.height = 172;
  person.weight = 55;
  person.sight[LEFT] = 1.2;
  person.sight[RIGHT] = 0.9;

  printf("%s さんの健康診断データ\n", person.name);
  printf("生年月日 : %d\n", person.birthday);
  printf("身長： %g cm\n", person.height);
  printf("体重：%g kg\n", person.weight);
  printf("左目の視力：%g, ", person.sight[LEFT]);
  printf("右目の視力：%g\n\n", person.sight[RIGHT]);

  printf("ポインタを使ってもう１回同じ出力をします。\n\n");

  printf("%s さんの健康診断データ\n", p->name);
  printf("生年月日 : %d\n", p->birthday);
  printf("身長： %g cm\n", p->height);
  printf("体重：%g kg\n", p->weight);
  printf("左目の視力：%g, ", p->sight[LEFT]);
  printf("右目の視力：%g\n", p->sight[RIGHT]);

  return 0;
}
