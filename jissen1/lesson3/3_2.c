#include<stdio.h>
int fibonacci(int n);

int main(){
	int n;
	printf("n：");
	scanf("%d",&n);
	printf("fibonacci(%d) = %d\n",n,fibonacci(n));
}

int fibonacci(int n){
	if(n == 1 || n == 0)
		return n;
	else 
		return fibonacci(n-1) + fibonacci(n-2);
}
