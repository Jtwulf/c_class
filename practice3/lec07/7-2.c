#include<stdio.h>

int main(){
	int array[10];
	printf("10個の整数を入力して下さい。");
	int i;
	for(i = 1; i <= 10; i++){
		printf("%dつ目：",i);
		scanf("%d",&array[i-1]);
	}
	int min = array[0], sec_min = array[1], fac_min, *sec_min_ptr, *fac_min_ptr;
	for(i = 0; i < 10; i++){
		if(min < array[i] && array[i] < sec_min)
			sec_min_ptr = &array[i];
	}
	printf("2番目に小さい値の住所は,%p\n",sec_min_ptr);
	int fac, j;
	for(i = 9; i >= 0; i--){
		for(j = 2; j < array[i]; j++){
		if(array[i] % j == 0)
			fac ++;
		}
		if(fac == 0)
			fac_min_ptr = &array[i];
	}
		printf("素数のうち最も小さい値の住所は,%p\n",fac_min_ptr);

	return 0;
}
