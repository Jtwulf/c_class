#include<stdio.h>

int is_prime(int n);


int main(){
	int n;
	printf("4~10000の偶数の中から適当な整数を入力して下さい：");
	scanf("%d",&n);
	int i,x,y;
	for(i = n-1; i > -1; i--){
		if(is_prime(i) == 1 && is_prime(n-i) == 0){
			printf("%d = %d + %d\n",n,i,n-i);
			return 0;
		}
	}
}

int is_prime(int n){
	int i, prime = 0;
	for(i = n-1; i > 1; i--){
		if(n % i == 0) //割り切れるか約数か否か
			prime ++;
	}
	if(prime == 2)
		return 1; //nが素数
	else
		return 0; //mが素数じゃない
}
