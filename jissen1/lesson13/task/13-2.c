#include<stdio.h>
#include<stdlib.h>

typedef struct point {
	int x;
	int y;
} ppoint;

struct rect {
	ppoint upper_left;
	ppoint lower_right;
} data ,*p = &data;

int rect_s(struct rect *p);

int main(){
	double x1, x2, y1, y2;
	printf("x1 y1 x2 y2 -> ");
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	data.upper_left.x = x1;
	data.upper_left.y = y1;
	data.lower_right.x = x2;
	data.lower_right.y = y2;

	printf("%d\n",rect_s(p));
	return 0;
}

int rect_s(struct rect *p){
	return (data.lower_right.x-data.upper_left.x)*(data.lower_right.y-data.upper_left.y);
}

