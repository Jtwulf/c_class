#include<stdio.h>

int main(){
	int array1[3][3], array2[3];
	for(int i = 0; i < 3; i++){
		array2[i] = 0;
		for(int j = 0; j < 2; j++){
			printf("array[%d][%d] -> ",i,j);
			scanf("%d",&array1[i][j]);
		}
		array1[i][2] = array1[i][0] + array1[i][1];
	}

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			array2[i] += array1[i][j];
		}
		printf("%d\n",array2[i]);
	}

	return 0;
}
