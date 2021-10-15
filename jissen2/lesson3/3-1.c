#include<stdio.h>

//0の実装方法が分からない

void recursive(int n){
	if(n == 0) return;
	recursive(n/2);
	printf("%d",n%2);
}

int main(){
	int n;
	printf("input number -> ");
	scanf("%d",&n);
	recursive(n);
	printf("\n");
	return 0;
}
