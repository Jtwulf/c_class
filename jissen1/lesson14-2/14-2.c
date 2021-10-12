#include<stdio.h>

int main(){
	int arr1[3][3];
	int arr2[3];

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 2; j++){
			printf("array1[%d][%d] -> ",i,j);
			scanf("%d",&arr1[i][j]);
		}
		arr1[i][2] = arr1[i][0] + arr1[i][1];
	}

	int max;
	for(int i = 0; i < 3; i++){
		max = 0;
		for(int j = 0; j < 3; j++){
			if(max < arr1[j][i])
				max = arr1[j][i];
		}
		arr2[i] = max;
		printf("%d ",arr2[i]);
	}
	printf("\n");

	return 0;
}
