#include<stdio.h>

int min_common_multiplier(int n, int m);
int max_divisors(int n);
void print_gcd_lcm(int x, int y);

int main(){
	print_gcd_lcm(10,30);
	return 0;
}


//最大公約数
int max_divisors(int n){
	int i;
	for(i = n-1; i > 0; i--){
		if(n % i == 0)
			return i;
	}
}

void print_gcd_lcm(int x, int y){
	printf("最大公約数：(%d) %d (%d) %d\n",x,max_divisors(x),y,max_divisors(y));
	printf("最小公倍数： %d\n",min_common_multiplier(x,y));
}

//最小公倍数
int min_common_multiplier(int n, int m){
	int buf;
	if(m > n){
		buf = m;
		m = n;
		n = buf;
	}

	int r = n % m;
	while(r != 0){
		n = m;
		m = r;
		r = n % m;
	}
	return m;
}
