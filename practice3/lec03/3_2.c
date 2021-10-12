#include<stdio.h>
int min_input(int n);

int main(){
	int n;
	printf("自然数を入力して下さい：");
	scanf("%d",&n);
	printf("%d個の自然数の中から最小値を出力します。\n",n);
	printf("最小値は%dです。\n",min_input(n));
	return 0;
}

int min_input(int n){
	printf("%d個の自然数を入力してください。\n",n);
	int i, min, number;
	printf("1つ目：");
	scanf("%d",&min);
	for(i = 1; i < n; i++){
		printf("%dつ目：",i+1);
		scanf("%d",&number);
		if(min > number){
			min = number;
		}
	}
	return min;
}
