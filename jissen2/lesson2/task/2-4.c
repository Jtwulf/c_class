#include<stdio.h>
#include<stdlib.h>

int main(){
	int n;
	printf("int型のメモリを何個確保しますか？ ");
	scanf("%d",&n);
	int *n_p = (int *)malloc(sizeof(int) * n);
	if (n_p == NULL) exit(1); //異常終了

	for(int i = 0; i < n; i++){
		printf("%d番目の変数に格納する値を入力　-> ", i+1);
		scanf("%d", n_p+i);
	}

	int max = *n_p;
	for(int i = 0; i < n; i++){
		if(max < *(n_p+i)) max = *(n_p+i);
	}

	printf("max:%d\n",max);
	free(n_p);
	return 0;
}
