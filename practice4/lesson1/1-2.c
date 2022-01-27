#include<stdio.h>

int main(){
	int a[3][4], b[3], max = 0;
	for(int i = 0; i < 3; i++){
		max = a[i][0];
		for(int j = 0; j < 4; j++){
			printf("%d行%d列 => ",i,j);
			scanf("%d", &a[i][j]);
			if(max < a[i][j]) max = a[i][j];
		}
		b[i] = max;
	}

	for(int i = 0; i < 3; i++){
		printf("%d行目の最大値 : %d\n",i,b[i]);
	}

	return 0;
}
