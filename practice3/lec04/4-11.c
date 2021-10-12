#include<stdio.h>
#include<stdlib.h>

void selection_sort(int array[], int n);
int binary_search(int array[], int start, int end, int x);

int main(){
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	selection_sort(array,10);
	printf("%d\n",binary_search(array,0,10,100));
	return 0;
}



void selection_sort(int array[], int n){
	int min_index;
	for(int i = 0; i < n; i++){
		min_index = i;
		for(int j = i+1; j < n; j++){
			if(array[min_index] > array[j])
				min_index = j;
		}
		int buf = array[min_index];
		array[min_index] = array[i];
		array[i] = buf;
	}
}

int binary_search(int array[], int start, int end, int x){
	int middle = (start + end) / 2;
	if(x == array[middle]){
		return middle;
	}else if(start >= end){
		return -1;
	}else if(x > array[middle]){
		return binary_search(array,middle+1,end,x);
	}else if(x < array[middle]){
		return binary_search(array,start,middle-1,x);
	}
}
