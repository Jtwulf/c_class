#include<stdio.h>
typedef struct s_point{
	double x;
	double y;
} point;

int main(){
	point point1, point2;
	printf("input 2 point of x,y -> ");
	scanf("%lf %lf %lf %lf",&point1.x, &point1.y, &point2.x, &point2.y);
	double slope = (point2.y - point1.y) / (point2.x - point1.x);
	double intercept = point1.y - slope * point1.x;
	printf("%lf, %lf\n", slope, intercept);
	return 0;
}
