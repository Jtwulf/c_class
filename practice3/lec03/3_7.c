#include<stdio.h>

int sum_divisors(int n);

int main(){
	int n;
	printf("適当な整数を入力して下さい：");
	scanf("%d",&n);
	int factor = sum_divisors(n);
	if(factor < n)
		printf("%dは不足数です。\n",n);
	else if(factor == n)
		printf("%dは完全数です。\n",n);
	else if(factor > n)
		printf("%dは過剰数です。\n",n);

	return 0;
}

int sum_divisors(int n){
	int i;
	int sum = 0;
	for(i = 1; i < n; i++){
		if(n % i == 0)
			sum += i;
	}
	return sum;
}
