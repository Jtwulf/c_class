#include<stdio.h>

void print_min_abs(int arr[], int num, int len){
	int abs = *arr - num;
	int arr_abs;
	int elem = *arr;
	int i = 0;

	if(abs < 0) abs *= -1;
	while(i < len){
		arr_abs = *arr - num;
		if(arr_abs < 0) arr_abs *= -1;
		if(abs > arr_abs){
			abs = arr_abs;
			elem = *arr;
		}
		i++;
		arr++;
	}
	printf("%d\n",elem);
}

int main(){
    int arr[] = {1,10,100,1000,10000};
    int num;
    int len = sizeof(arr) / sizeof(int);

    printf("input num -> ");
    scanf("%d",&num);
    print_min_abs(arr,num,len);
    return 0;
}
