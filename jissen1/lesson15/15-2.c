#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>



int main(){
	int array[4][3];
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			printf("array[%d][%d] -> ",i,j);
			scanf("%d",&array[i][j]);
		}
	}

	for(int i = 0; i < 4; i ++){
		for(int j = 0; j < 3; j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}

	int max;
	for(int i = 0; i < 3; i++){
		max = 0;
		for(int j = 0; j < 4; j++){
			if(max < array[j][i])
				max = array[j][i];
		}
		printf("%d\t",max);
	}
	printf("\n");

	return 0;
}
