#include<stdio.h>
#include<stdlib.h>

int main(){
	int nr, rc;
	printf("2次元配列の行数を入力 -> ");
	scanf("%d", &nr);
	printf("2次元配列の列数を入力 -> ");
	scanf("%d", &rc);

	int **p = (int **)malloc(sizeof(int) * (nr*rc));
	for(int i = 0; i < nr; i++){
		for(int j = 0; j < rc; j++){
			*(*(p+i)+j)= i+j;
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
