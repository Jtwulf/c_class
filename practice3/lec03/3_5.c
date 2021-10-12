#include<stdio.h>
int largest_prime(int n);
int main(){
	int n;
	printf("適当な自然数を入力して下さい：");
	scanf("%d",&n);
	int ans = largest_prime(n);
	printf("%d以下の最大素数は、%dです。\n",n,ans);

	return 0;
}

int largest_prime(int n){
	int i,j;

	for(i = n-1; i > 1; i--){
		int prime = 0;
		for(j = i-1; j > 1; j--){
			if(i % j == 0)
				prime++;
		}
		if(prime == 0)
			return i;
	}
	return -1;
}
