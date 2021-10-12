#include<stdio.h>

void lcm_gcd(int array[], int len, int *lcm, int *gcd);
int get_gcd(int a, int b);
int get_lcm(int a, int b);

int main(){
	int array[5] = {7,3,9,5,4}, len = 5;
	int lcm, *lcm_p = &lcm, gcd, *gcd_p = &gcd;

	lcm_gcd(array,len,lcm_p,gcd_p);
	printf("最小公倍数:%d, 最大公約数:%d\n",*lcm_p,*gcd_p);
	return 0;
}

void lcm_gcd(int array[], int len, int *lcm, int *gcd){
	//最大公約数を求める
	*gcd = get_gcd(array[0],array[1]);
	for(int i = 2; i < len; i++){
		*gcd = get_gcd(*gcd,array[i]);
	}

	//最小公倍数を求める
	*lcm = get_lcm(array[0],array[1]);
	for(int i = 2; i < len; i++){
		*lcm = get_lcm(*lcm,array[i]);
	}
}

int get_gcd(int a, int b){
	if(b > a){
		int buf = a;
		a = b;
		b = buf;
	}

	int n = a % b;
	while(n != 0){
		a = b;
		b = n;
		n = a % b;
	}

	return b;
}

int get_lcm(int a, int b){
	return a*b / get_gcd(a,b);
}
