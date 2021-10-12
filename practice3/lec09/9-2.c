#include<stdio.h>

int main(){
	int score[3][4];
	char abc[] = {'A','B','C'};

	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			printf("%d人目のゲーム%dの点数:",i+1,j+1);
			scanf("%d",&score[i][j]);
		}
	}

	int max;
	int per_max[3];
	int compe_max[4];

	for(int i = 0; i < 3; i++){
		max = score[i][0];
		for(int j = 0; j < 4; j++){
			if(max < score[i][j])
				max = score[i][j];
		}
		per_max[i] = max;
	}
	for(int i = 0; i < 4; i++){
		max = score[0][i];
		for(int j = 0; j < 3; j++){
			if(max < score[j][i])
				max = score[j][i];
		}
		compe_max[i] = max;
	}

	printf("\t");
	for(int i = 0; i < 4; i++){
		printf("ゲーム%d\t",i+1);
	}
	printf("最高点\n");

	for(int i = 0; i < 3; i++){
		printf("%c君\t",abc[i]);
		for(int j = 0; j < 4; j++){
			printf("%d\t",score[i][j]);
		}
		printf("%d\n",per_max[i]);
	}
	printf("最高点\t");
	for(int i = 0; i < 4; i++){
		printf("%d\t",compe_max[i]);
	}
	printf("\n");

	return 0;
}
