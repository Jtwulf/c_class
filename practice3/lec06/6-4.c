#include<stdio.h>

void print_negative(int array[], int i, int len);

int main(){
	int array[] = {1,2,3,4,5,-1,-2,-3,-4,-5};
	int len = 10;
	print_negative(array,i,len);
	return 0;
}

void print_negative(int array[], int i ,int len){
	if(i == len-1){
		if(array[i] < 0)
			printf("%d",array[i]);
	} else {		print_negative()
	}
}
