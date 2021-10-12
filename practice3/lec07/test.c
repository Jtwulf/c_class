#include<stdio.h>
#define N 10

int get_second_min_idx(int array[], int n);
int is_prime(int n);
int get_min_prime_idx(int array[], int n); 

int main(){
	int i, minIdx, minIdx2;
	int array[N];
	for(i = 0; i < N; i++){
		scanf("%d",&array[i]);
	}
	minIdx2 = get_second_min_idx(array,N);
	minIdx = get_min_prime_idx(array,N);
	if(minIdx != -1){
		printf("%p,%p\n",&array[minIdx2],&array[minIdx]);
	}
}

int get_second_min_idx(int array[], int n){
	int i, minIdx, minIdx2;

	minIdx = 0;
	minIdx2 = 1;
	if(array[minIdx] > array[minIdx2]){
		minIdx = 1;
		minIdx2 = 0;
	}

	for(i = 0; i < n; i++){
		if(array[minIdx] > array[i]){
			minIdx2 = minIdx;
			minIdx = i;
		} else if(array[minIdx2] > array[i]){
			minIdx2 = i;
		}
	}
	return minIdx2;
}

int is_prime(int n){
	int i;
	if(n < 2){
		return 0;
	}
	for(i = 2; i < n; i++){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}

int get_min_prime_idx(int array[], int n){
	int i, minIdx = -1;

	minIdx = i;
	for(i = 0; i < n; i++){
		if(array[minIdx] > array[i] && is_prime(array[i]) == 1){
			minIdx = i;
		}
	}
	return minIdx;
}
