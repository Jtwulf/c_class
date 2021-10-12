#include<stdio.h>

int main(){
	int n,i;
	printf("自然数を入力：");
	scanf("%d",&n);
	int sum = 0;
	for(i = 0; i <= n; i ++){
		sum += i;
	}
	printf("%d\n",sum);
	return 0;
}
