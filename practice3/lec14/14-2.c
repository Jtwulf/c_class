#include<stdio.h>

struct student {
	char name[32];
	int english_score;
	int math_score;
};

int print_score(struct student *p);

int main(){
	struct student s = {"akiyama",60,70}, *sp = &s;
	printf("%d\n",print_score(sp));
	return 0;
}

int print_score(struct student *p){
	if(p->english_score > p->math_score)
		return p->english_score;
	else
		return p->math_score;
}
