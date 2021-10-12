#include<stdio.h>

struct l_time{
	int h;
	int m;
	int s;
};

int seconds(struct l_time t);
void set(int second, struct l_time *t);
struct l_time sum(struct l_time t1, struct l_time t2);
void set_min(struct l_time *t1, struct l_time *t2);

int main(){
	struct l_time t1 = {10,30,0};
	struct l_time t2 = {6,15,30};

	printf("seconds(t1):%d seconds(t2):%d\n",seconds(t1),seconds(t2));
	struct l_time t3, *t3p = &t3;
	set(40000,t3p);
	printf("h(t3):%d m(t3):%d s(t3):%d\n",t3.h,t3.m,t3.s);
	struct l_time t4 = sum(t1,t2), *t4p = &t4;
	printf("h(t4):%d m(t4):%d s(t4):%d\n",t4.h,t4.m,t4.s);
	set_min(t3p,t4p);
	printf("h(t3):%d m(t3):%d s(t3):%d\n",t3.h,t3.m,t3.s);
	printf("h(t4):%d m(t4):%d s(t4):%d\n",t4.h,t4.m,t4.s);

	return 0;
}

int seconds(struct l_time t){
	return t.h*3600 + t.m*60 + t.s;
}

void set(int second, struct l_time *t){
	t->h = second / 3600;
	t->m = (second % 3600) / 60;
	t->s = second % 60;
}

struct l_time sum(struct l_time t1, struct l_time t2){
	struct l_time t_sum;
	t_sum.h = t1.h + t2.h;
	t_sum.m = t1.m + t2.m;
	t_sum.s = t1.s + t2.s;
	return t_sum;
}

void set_min(struct l_time *t1, struct l_time *t2){
	if(t1->h > t2->h){
		t1->h = t2->h;
		t1->m = t2->m;
		t1->s = t2->s;
	} else {
		t2->h = t1->h;
		t2->m = t1->m;
		t2->s = t1->s;
	}
}
