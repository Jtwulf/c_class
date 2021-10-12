#include<stdio.h>
#include<math.h>

double q_equation(int a, int b, int c, double *x1, double *x2);

int main(){
	int a = 1, b = 2, c = 3;
	double *x1, *x2;
	q_equation(a,b,c,x1,x2);
	printf("%f, %f\n",*x1, *x2);
	return 0;
}

double q_equation(int a, int b, int c, double *x1, double *x2){
	*x1 = ((-1*b+sqrt(pow(b,2)-4*a*c))/2*a);
	*x2 = ((-1*b-sqrt(pow(b,2)-4*a*c))/2*a);
}
