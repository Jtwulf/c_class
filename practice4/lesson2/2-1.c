#include<stdio.h>

int main(){
	int arr[10];
	printf("input 10 plus number like this (1 3 5 7 ...)\n");
	for(int i = 0; i < 10; i++){
		scanf("%d",&arr[i]);
	}
	for(int i = 0; i < 10; i++)
		if(arr[i] % 3 == 0) printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
