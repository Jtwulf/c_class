#include<stdio.h>

int main(void){
	int a;
	double b;

	printf("input an int number:");
	scanf("%d", &a);
	printf("input an double score:");
	scanf("%lf",&b);

	printf("%%d: %d\n", a);
	printf("%%nd: %5d\n", a);
	printf("%%f: %f\n", b);
	printf("%%nf: %12f\n", b);
	printf("%%m.nf: %10.1f\n", b);
	return 0;
}
