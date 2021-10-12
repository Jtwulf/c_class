#include<stdio.h>
#include<math.h>

double variance(int array[], int n);
double average(int array[], int n);

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9};
	int n = 9;
	printf("%3.1f\n",variance(array,n));
	return 0;
}


double variance(int array[], int n){
	int ave = average(array,n);

	int i;
	int sum = 0;
	for(i = 0; i < n; i++){
		sum += pow(array[i]-ave,2);
	}

	return sum / n-1;
}

double average(int array[], int n){
	double sum = 0.0;
	double ave;
	int i;

	for(i = 0; i < n; i ++){
		sum += array[i];
	}

	ave = sum / n;
	return ave;
}
