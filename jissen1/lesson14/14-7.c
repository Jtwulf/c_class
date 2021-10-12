#include<stdio.h>

struct point {
	double x;
	double y;
};

struct rect {
	struct point upperleft;
	double h;
	double w;
};

int contain(struct rect *pr, struct point *pp);

int main(){
	struct rect r, *pr = &r;
	struct point p, *pp = &p;
	printf("長方形rの左上の点のx座標 y座標 高さ 幅を入力> ");
	scanf("%lf %lf %lf %lf",&r.upperleft.x,&r.upperleft.y,&r.h,&r.w);
	while(1){
		printf("点pのx座標 y座標を入力> ");
		scanf("%lf %lf",&p.x,&p.y);
		if(contain(pr,pp) == 1)
			break;
	}

	printf("点pが長方形rに含まれている\n");

	return 0;
}

int contain(struct rect *pr, struct point *pp){
	if(pr->upperleft.x <= pp->x && pp->x <= pr->upperleft.x+pr->w && pr->upperleft.y-pr->h <= pp->y && pp->y <= pr->upperleft.y){
		return 1;
	} else {
		return 0;
	}
}
