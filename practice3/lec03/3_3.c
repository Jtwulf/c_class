#include<stdio.h>
int min_factorial(int n);

int main(){
	int n;
	printf("自然数nを入力して下さい：");
	scanf("%d",&n);
	printf("!x > nを満たす最小のxは%dです\n",min_factorial(n));
	return 0;
}

int min_factorial(int n){
	int x = 1;
	int i = 1;
	while(x <= n){
		x = x* i;
		i ++;
	}
	return i-1;
}
