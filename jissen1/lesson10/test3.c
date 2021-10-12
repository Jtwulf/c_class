#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024
#define PAI 3.14

double comp_circle(double r, double *area, double *circ);

int main(){
	double R, area, *area_p = &area, circ, *circ_p = &circ;
	printf("R -> ");
	scanf("%lf",&R);
	comp_circle(R,area_p,circ_p);
	printf("面積：%f,円周の長さ：%f\n",area,circ);
	return 0;
}

double comp_circle(double r, double *area, double *circ){
	*area = r*r*PAI;
	*circ = r*2*PAI;
}
