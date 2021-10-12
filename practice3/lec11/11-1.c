#include<stdio.h>
#define N 5

int main(){
	double array[N];
	for(int i = 0; i < N; i++){
		printf("array[%d] -> ",i+1);
		scanf("%lf",&array[i]);
	}

	for(int i = 0; i < N; i++){
		printf("array[%d] = %f (%p)\n",i+1,array[i],&array[i]);
	}
	return 0;
}
