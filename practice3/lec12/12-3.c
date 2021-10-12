#include<stdio.h>
#include<math.h>

struct rect {
	double x;
	double y;
	double h;
	double w;
} r2, r3;

struct rect r1 = {
	10,20,5,20,
};

int main(){
	printf("[r2] x y h w -> ");
	scanf("%lf",&r2.x);
	scanf("%lf",&r2.y);
	scanf("%lf",&r2.h);
	scanf("%lf",&r2.w);
	printf("[r3] x y h w -> ");
	scanf("%lf",&r3.x);
	scanf("%lf",&r3.y);
	scanf("%lf",&r3.h);
	scanf("%lf",&r3.w);

	printf("a.\n");
	printf("r1の外周:%f\n",r1.h*2+r1.w*2);
	printf("r2の面積:%f\n",r2.h*r2.w);
	printf("r3の対角線の長さ:%f\n",pow(pow(r3.h,2)+pow(r3.w,2),0.5));

	printf("b.\n");

	double x, y;
	printf("[P] x y -> ");
	scanf("%lf",&x);
	scanf("%lf",&y);

	int count = 0;
	if(r1.x <= x && x <= r1.x+r1.w && r1.y <= y && y <= r1.y+r1.h) count++;
	if(r2.x <= x && x <= r2.x+r2.w && r2.y <= y && y <= r2.y+r2.h) count++;
	if(r3.x <= x && x <= r3.x+r3.w && r3.y <= y && y <= r3.y+r3.h) count++;

	printf("%d\n",count);

	return 0;
}
