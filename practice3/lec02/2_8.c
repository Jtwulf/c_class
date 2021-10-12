#include<stdio.h>
#include<math.h>

int main(){
	double a = 2.0;
	double b = 3.0;
	double c = 1.0;

	double ans1 = -1.0*b+sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;
	double ans2 = -1.0*b-sqrt(pow(b,2.0)-4.0*a*c)/2.0*a;

	printf("解は%3.1fと%3.1fです。\n",ans1,ans2);
	return 0;
}
