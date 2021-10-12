#include<stdio.h>

int find_max_prime(int array[]);

int main(){
	int array[5];
	int i;
	printf("5つの整数を入力して下さい.\n");
	for(i = 0; i < 5; i++){
		scanf("%d",&array[i]);
	}
	printf("素数のうち最大値を格納している添字は%d\n",find_max_prime(array));
	return 0;
}

int find_max_prime(int array[]){
	int i, j, len = 5, flag, max = -1;
	for(i = 0; i < len; i++){
		flag = 0;
		for(j = 2; j < array[i]; j++){
			if(array[i] % j == 0){
				flag ++;
			}
		}
		if(flag == 0 && max < array[i])
			max = i;
	}
	return max;
}
