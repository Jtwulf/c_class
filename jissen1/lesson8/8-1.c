#include<stdio.h>

int main(){
	int marks[4][3];
	int classTotal[3] = {0,0,0};
	int i, j;

	//成績の入力(2重ループ)
	for(i = 0; i < 4; i++){
		for(j = 0; j < 3; j++){
			printf("学生の%dの教科%dの成績 = ",i+1,j+1);
			scanf("%d",&marks[i][j]);
		}
	}

	//教科ごとの成績の集計(2重ループ)
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			classTotal[i] += marks[j][i];
		}
	}

	//集計結果の表示(1重ループ)
	for(i = 0; i < 3; i++){
		printf("教科%dの総得点=%d\n",i+1,classTotal[i]);
	}

	return 0;
}
