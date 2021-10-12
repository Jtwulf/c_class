#include<stdio.h>

double second_min(double array[], int n);

int main(){
	int n = 5;
	double array[5] = {1.0,2.0,3.0,4.0,5.0};

	printf("%3.1f\n",second_min(array,n));
	return 0;
}

double second_min(double array[], int n){
	int i,j;
	double min, sec_min;

	if(array[0] > array[1]){
	       	min = array[1];
	        sec_min = array[0];
	} else {
		min = array[0];
		sec_min = array[1];
	}

	for(i = 2; i < n; i++){
		if(min > array[i]){
			sec_min = min;
			min = array[i];
		} else if(sec_min > array[i]){
			sec_min = array[i];
		}
	}

	return sec_min;
}
