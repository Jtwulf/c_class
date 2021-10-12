#include<stdio.h>

void set_primes(int count, int n, int array[]);

int main(){
	int array[10];
	int n;
	printf("n -> ");
	scanf("%d",&n);
	set_primes(0,n,array);
	int i;
	for(i = 0; i < 10; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
}

void set_primes(int count, int n, int array[]){
	if(count == 10){
		return;
	} else {
		int i, duf = 0;
		for(i = n-1; i > 1; i--){
			if(n % i == 0){
				duf ++;
			}
		}
		if(duf == 0){
			array[count] = n;
			set_primes(count+1,array[count]+1,array);
		} else {
			set_primes(count,n+1,array);
		}
	}
}
