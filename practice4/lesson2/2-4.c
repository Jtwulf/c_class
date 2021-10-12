#include<stdio.h>

typedef struct s_point{
	double x;
	double y;
} point;

point get_point(double x, double y, point *s_point){
	s_point->x = x;
	s_point->y = y;
}

void cross(point p1, point p2, int *cross_x, int *cross_y){
	if(p1.x >= 0 && p2.x <= 0 || p1.x <= 0 && p2.x >= 0)
		*cross_x = 1;
	else
		*cross_x = 0;
	if(p1.y >= 0 && p2.y <= 0 || p1.y <= 0 && p2.y >= 0)
		*cross_y = 1;
	else
		*cross_y = 0;
}

int main(){
	point p1, p2;
	double x1, x2, y1, y2;
	int cross_x, cross_y;

	printf("input 2 point of x,y -> ");
	scanf("%lf %lf %lf %lf",&x1, &y1, &x2, &y2);
	get_point(x1, y1, &p1);
	get_point(x2, y2, &p2);
	cross(p1, p2, &cross_x, &cross_y);
	printf("x:%d y:%d\n",cross_x, cross_y);
	return 0;
}
