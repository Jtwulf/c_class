#include<stdio.h>

void prime_factor2(int x,int n);

int main(){
	int x;
	printf("正の整数ｘ：");
	scanf("%d",&x);
	prime_factor2(x,2);
	return 0;
}


void prime_factor2(int x,int n){
	if(n < x){
		if(x % n == 0){
			printf("%d\n",n);	
			prime_factor2(x/n,n);
		} else {
			prime_factor2(x,n+1);
		}
	}
	printf("%d\n",n);
	return;
}
