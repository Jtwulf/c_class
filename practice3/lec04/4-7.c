#include<stdio.h>

void reverse(int array[], int n);

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	reverse(array,n);

	for(int i = 0; i < n; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}

void reverse(int array[], int n){
	int buf[n];
	for(int i = 0; i < n; i++){
		buf[i] = array[i];
	}

	for(int i = 0; i < n; i++){
		array[i] = buf[n-1-i];
	}
}
