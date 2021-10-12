#include<stdio.h>


int search(int *p, int n, int num);

int main(){
	int numarray[] = {1,8,4,9,3,8}, num, *numarray_ptr = numarray;
	while(num != 0){
		printf("整数を入力して下さい：");
		scanf("%d",&num);
		if(num == 0)
			break;
		else if(search(numarray_ptr,6,num) == 1)
			printf("○");
		else 
			printf("×");
		printf("\n");
	}
	return 0;
}

int search(int *p, int n, int num){
	int i;
	for(i = 0; i < n; i++){
		if(*(p+i) == num){
			return 1;
		}
	}
	return 0;
}
