#include<stdio.h>

int isPrime(int n){
	for(int i = 2; i < n; i++){
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int largestPrime(int n){
	int max = -1;
	for(int i = 2; i <= n; i++){
		if(isPrime(i))
			max = i;
	}
	return max;
}

int main(){
	int n;
	printf("n => ");
	scanf("%d", &n);
	printf("n以下の最大の素数は : %d\n", largestPrime(n));
	return 0;
}
