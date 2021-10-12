#include<stdio.h>
double ave_from_stdin();
int main(){
	printf("負数が入力されるまで、入力された整数の平均を計算します。\n");
	double n = ave_from_stdin();
	printf("入力された整数の平均値は%3.1fです\n",n);
	return 0;
}

double ave_from_stdin(){
	double sum;
	int number[10000]; 
	int i = 0;
	while(number[i-1] >  0 || i == 0 || i == 1){
		printf("整数を入力して下さい：");
		scanf("%d",&number[i]);
		if(number[i] < 0){
			return sum / i;
		}
		sum += number[i];
		i++;
	}
}
