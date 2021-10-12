#include<stdio.h>
#include<math.h>


struct point {
	double x;
	double y;
} p1,p2,p3;

struct rect {
	double x;
	double y;
	double h;
	double w;
};

int main(){
	printf("[p1] x y -> ");
	scanf("%lf",&p1.x);
	scanf("%lf",&p1.y);
	printf("[p2] x y -> ");
	scanf("%lf",&p2.x);
	scanf("%lf",&p2.y);

	int m, n;
	printf("m n -> ");
	scanf("%d",&m);
	scanf("%d",&n);

	p3.x = (n*p1.x + m*p2.x) / (m+n);
	p3.y = (n*p1.y + m*p2.y) / (m+n);

	printf("a.\np3.x = %f, p3.y = %f\n",p3.x,p3.y);

	if(pow(pow(p1.x,2)+pow(p1.x,2),0.5) > pow(pow(p2.x,2)+pow(p2.x,2),0.5)){
		int buf = p1.x;
		p1.x = p2.x;
		p2.x = buf;
		buf = p1.y;
		p1.y = p2.y;
		p2.y = buf;
	}

	struct rect r = {
		p1.x,
		p1.y,
		fabs(p2.x-p1.x),
		fabs(p2.y-p1.y),
	};

	printf("b.\nr.x = %f, r.y = %f, r.h = %f, r.w = %f\n",r.x,r.y,r.h,r.w);
	return 0;
}
