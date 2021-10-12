#include<stdio.h>

void max_min(int *begin, int *end, int *max, int *min);

int main(){
	int array[5], n = 5;
	for(int i = 0; i < n; i++){
		printf("array[%d] -> ",i);
		scanf("%d",&array[i]);
	}

	int *begin = array, *end = &array[4];
	int max = array[0], min = array[0], *max_p = &max, *min_p = &min;

	max_min(begin, end, max_p, min_p);
	printf("max -> %d, min -> %d\n",*max_p, *min_p);
	return 0;
}

void max_min(int *begin, int *end, int *max, int *min){
	for(int *i = begin; i <= end; i++){
		if(*i < *min){
			*min = *i;
		}
		if(*i > *max){
			*max = *i;
		}
	}
}
