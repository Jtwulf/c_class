#include<stdio.h>
#include<math.h>

int main(void){
	printf("半径が10cmの円の面積：%f\n",10*10*3.14);

	int fact = 1;
	int i;
	for(i = 1; i <= 10; i++){
		fact = fact*i;
	}
	printf("10の階乗：%d\n",fact);

	double a = 10;
	double b;
	b = sqrt(2);
	printf("1辺の長さが10cmである正方形の長さ：%f\n",a*b);

	return 0;
}
