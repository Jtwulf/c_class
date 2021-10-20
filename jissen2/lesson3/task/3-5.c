#include<stdio.h>
#include<stdlib.h>

int main(){
	int nr, rc;
	printf("2次元配列の行数を入力 -> ");
	scanf("%d", &nr);
	printf("2次元配列の列数を入力 -> ");
	scanf("%d", &rc);

	int **p;
	*p = (int *)malloc(sizeof(int) * (nr*rc));
	for(int i = 0; i < nr; i++){
		for(int j = 0; j < rc; j++){
			printf("%d行目%d列目の値を入力 -> ",i+1,j+1);
			scanf("%d",&p[i][j]);
		}
	}
	for(int i = 0; i < nr; i++){
		for(int j = 0; j < rc; j++){
			printf("%d\t",p[i][j]);
		}
		printf("\n");
	}

	return 0;
}
