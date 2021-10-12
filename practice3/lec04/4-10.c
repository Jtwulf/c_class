#include<stdio.h>

void selection_sort(int array[], int n);

int main(){
	int array[] = {10,9,8,7,6,5,4,3,2,1};
	selection_sort(array,10);
	for(int i = 0; i < 10; i++){
		printf("%d ",array[i]);
	}
	printf("\n");
	return 0;
}

void selection_sort(int array[], int n){
	int i, j, min_index = 0;

	for(i = 0; i < n; i++){
		min_index = i;
		for(j = i+1; j < n; j++){
			if(array[j] < array[min_index]){
				min_index = j;
			}
		}
		int buf = array[min_index];
		array[min_index] = array[i];
		array[i] = buf;
	}
}
