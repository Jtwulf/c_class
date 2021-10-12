#include<stdio.h>

int fanctorial(int n){
	int sum;
	if(n == 0) return 1;
	else return n*fanctorial(n-1);
}

int main(){
	int n;
	printf("input n -> ");
	scanf("%d",&n);
	printf("%d\n",fanctorial(n));
	return 0;
}
