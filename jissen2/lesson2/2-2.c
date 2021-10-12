#include<stdio.h>
#include<stdlib.h>

int main(){
	int *n_p = (int *)malloc(sizeof(int) * 3);
	if (n_p == NULL) exit(1); //異常終了
	for(int i = 0; i < 3; i++){
		printf("%d番目の変数に格納する値を入力　-> ", i+1);
		scanf("%d", n_p);
		n_p++;
	}
	n_p -= 3;
	for(int i = 0; i < 3; i++){
		printf("%d番目の変数のアドレスは%pで、値は%dです\n", i+1, n_p, *n_p);
		n_p++;
	}
	n_p -= 3;
	free(n_p);
	return 0;
}
