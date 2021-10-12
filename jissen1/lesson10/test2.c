#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 1024

int main(){
	int array[4][3], i, j;
	double avg[4];
	for(i = 0; i < 4; i++){
		avg[i] = 0;
		for(j = 0; j < 3; j++){
			printf("array[%d][%d] -> ",i,j);
			scanf("%d",&array[i][j]);
			avg[i] += array[i][j];
		}
		avg[i] = avg[i] / j;
	}
	for(i = 0; i < 4; i++){
		printf("array[%d] -> %f\n",i,avg[i]);
	}
	return 0;
}
