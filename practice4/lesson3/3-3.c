#include<stdio.h>

int gcd(int m, int n){
	if(m % n == 0) return n;
	else {
		return gcd(m,m%n);
	}
}

int main(){
	int m, n;
	printf("input m, n -> ");
	scanf("%d %d",&m, &n);
	printf("%d\n",gcd(m,n));
	return 0;
}
