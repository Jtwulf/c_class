#include<stdio.h>

double array_ave(int array[], int n);

int main(){
	int n = 5;
	int array[5];

	for(int i = 0; i < n; i++){
		printf("array[%d] -> ",i);
		scanf("%d",&array[i]);
	}

	printf("average = %3.1f\n",array_ave(array,n));
	return 0;
}

double array_ave(int array[], int n){
	double sum = 0;
	for(int i = 0; i < n; i++){
		sum += (double)array[i];
	}
	return sum / (double)n;
}
