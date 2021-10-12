#include<stdio.h>

int main(){
	int arr[4][4], count = 0;
	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 4; j++){
			printf("arr[%d][%d] -> ",i,j);
			scanf("%d",&arr[i][j]);

			if(i == j && arr[i][j] % 2 == 0)
				count ++;
		}
	}

	printf("%d\n",count);

	return 0;
}
