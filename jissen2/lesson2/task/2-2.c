#include<stdio.h>

int odd_even(int n){
	if (n % 2 == 0) return -1;
	else return 1;
}

int main(){
	int n;
	printf("input n -> ");
	scanf("%d",&n);
	printf("%d\n",odd_even(n));
	return 0;
}
