#include<stdio.h>

double max_darray(double array1[], double array2[], int n1, int n2);

int main(){
	double array1[] = {1.0,2.0,3.0,4.0,5.0};
	double array2[] = {1.5,2.5,3.5,4.5,5.5};

	printf("%3.1f\n",max_darray(array1,array2,5,5));

	return 0;
}

double max_darray(double array1[], double array2[], int n1, int n2){
	int i, j;
	double max = array1[0] + array2[0];

	for(i = 0; i < n1; i++){
		for(j = 0; j < n2; j++){
			if(i != j && max < array1[i] + array2[j])
				max = array1[i] + array2[j];
		}
	}
	return max;
}
