#include<stdio.h>

int is_prime(int n);
int num_prime_factors(int n);

int main(){
	int n = 30;
	printf("%d\n",num_prime_factors(n));
	return 0;
}

int num_prime_factors(int n){
	int i = 2, prime_factor = 0;
	while(n != 1){
		if(is_prime(i) == 1 && n % i == 0){
			printf("%d / %d = %d\n",n,i,n/i);
			n = n/i;
			prime_factor ++;
			i--;
		}
		i++;
	}
	return prime_factor;
}

int is_prime(int n){
	int i, prime = 0;

	if(n == 2 || n == 3)
		return 1;

	for(i = n; i >= 1; i--){
		if(n % i == 0) //割り切れるか約数か否か
			prime ++;
	}

	if(prime == 2)
		return 1; //nが素数
	else
		return 0; //mが素数じゃない
}
