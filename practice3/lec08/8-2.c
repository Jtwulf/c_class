#include<stdio.h>
#include<math.h>

double round_off(double *x);

int main(){
	double a = 3.14;
	double *x = &a;
	printf("%f\n",round_off(x));
	return 0;
}
double round_off(double *x){
	double decimal = *x -(int)*x;
	if(decimal > 0.5)
		*x = (int)*x + 1;
	else if(decimal >= -0.5 && decimal <= 0.5)
		*x = (int)*x;
	else if(decimal < -0.5)
		*x = (int)*x - 1;
}
