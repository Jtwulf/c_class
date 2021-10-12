#include<stdio.h>

double sum_array(double* p, int n);

int main(){
	double array[5][4]; //5行4列の2次元配列
	int i, j;

	//データの入力、格納
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			printf("%d行目%d列目：",i+1,j+1);
			scanf("%lf",&array[i][j]);
		}
	}

	//合計値の計算、出力
	double* ptr;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 4; j++){
			printf("%10.2f",array[i][j]);
		}
		ptr = &array[i][0];
		printf("%10.2f\n",sum_array(ptr,4));
	}

	return 0;
}

double sum_array(double* p, int n){
	int i;
	double sum = 0.0;
	for(i = 0; i < n; i++){
		sum += *(p+i);
	}
	return sum;
}
