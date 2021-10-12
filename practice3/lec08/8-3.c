#include<stdio.h>

void swap3(double *a, double *b, double *c);

int main(){
	double a = 1, b = 2, c = 3;
	double *ap = &a, *bp = &b, *cp = &c;
	swap3(ap,bp,cp);
	printf("%f,%f,%f\n",*ap,*bp,*cp);
	return 0;
}

void swap3(double *a, double *b, double *c){
	double buf;
	buf = *a;
	*a = *b;
	*b = *c;
	*c = buf;
}
