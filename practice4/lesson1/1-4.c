#include<stdio.h>

int sum_divisors(int n);

int main(){
	int n, div;
	printf("nを入力 => ");
	scanf("%d", &n);
	div = sum_divisors(n);

	if(n == div)
		printf("nは完全数\n");
	else if(n > div)
		printf("nは不足数\n");
	else
		printf("nは過剰数\n");
	return 0;
}

int sum_divisors(int n){
	int sum = 0;
	for(int i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	return sum;
}
