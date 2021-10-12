#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024

int main(){
	double array[3];
	for(int i = 0; i < 3; i++){
		printf("array[%d] -> ",i);
		scanf("%lf",&array[i]);
	}
	printf("arrayの末尾要素：%f,アドレス：%p\n",array[2],&array[2]);
	return 0;
}
