#include<stdio.h>
#include<math.h>

int min_diff_index(double array[], int n);


int main(){
	int n = 5;
	double array[] = {1.0,2.0,4.0,6.0,12.0};
	printf("%d\n",min_diff_index(array,n));
	return 0;
}

int min_diff_index(double array[], int n){
	int max_abs = 0, max_abs_index = 0;
	for(int i = 0; i <= n-2; i++){
		if(max_abs < fabs(array[i] - array[i+1])){
			max_abs_index = i;
			max_abs = fabs(array[i] - array[i+1]);
		}
	}

	return max_abs_index;
}
