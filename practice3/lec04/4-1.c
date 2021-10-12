#include<stdio.h>

void print_binary(int n);

int main(){
	int n;
	printf("n -> ");
	scanf("%d",&n);

	print_binary(n);
	printf("\n");
	return 0;
}

void print_binary(int n){
	if(n == 0){
		return;
	}
	print_binary(n/2);
	printf("%d",n%2);
}
