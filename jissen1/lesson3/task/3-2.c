#include<stdio.h>
long int kaijou(int n);

int main(){
	int n;

	printf("整数を入力：");
	scanf("%d",&n);

	printf("%d! = %ld\n",n,kaijou(n));
	return 0;
}

long int kaijou(int n){
	int i;
	long s = 1;
	for(i = 2; i <= n; i++){
		s *= i;
	}

	return s;
}
