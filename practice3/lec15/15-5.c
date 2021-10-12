#include<stdio.h>

double ave_prime(int *p, int n);

int main(){
	int arr[5], *p = arr;
	for(int i = 0; i < 5; i++){
		printf("arr[%d] -> ",i);
		scanf("%d",&arr[i]);
	}
	printf("%f\n",ave_prime(p,5));
	return 0;
}

double ave_prime(int *p, int n){
	double sum = 0;
	int flag;
	for(int i = 0; i < n; i++){
		flag = 0;
		for(int j = *p-1; j > 1; j--){
			if(*p % j == 0)
				flag = 1;
		}
		if(flag == 0 && *p != 1){
			sum += *p;
		}
		p++;
	}
	return sum / n;
}
