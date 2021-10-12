#include<stdio.h>

void point_of_intersection(int a1, int b1, int a2, int b2, double *x, double *y);

int main(){
	int a1, a2, b1, b2;
	double x, y;
	printf("a1 -> ");
	scanf("%d",&a1);
	printf("b1 -> ");
	scanf("%d",&b1);
	printf("a2 -> ");
	scanf("%d",&a2);
	printf("b2 -> ");
	scanf("%d",&b2);

	point_of_intersection(a1,b1,a2,b2,&x,&y);
	printf("(%f,%f)\n",x,y);

	return 0;
}

void point_of_intersection(int a1, int b1, int a2, int b2, double *x, double *y){
	*x = (b2-b1) / (a1-a2);
	*y = (a1*b2)-(b1*a2) / (a1-a2);
}

/* x = b2 - b1 / a1 - a2
 * y = a1*b2 - b1*a2 / a1 - a2
 */

