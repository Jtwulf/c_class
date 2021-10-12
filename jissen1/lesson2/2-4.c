#include<stdio.h>
int main(){
	int score[5];
	int i = 0;
	while(i < 5){
		printf("%d科目目の点数を入力してください:",i+1);
		scanf("%d",&score[i]);
		if(score[i] < 0 || 100 < score[i]){
			printf("入力間違い！1から100までの点数を入力してください！\n");
			continue;
		}
		i++;
	}

	int sum = 0;
	int j;
	for(j = 0; j < 5; j++){	
		sum += score[j];
	}

	printf("合計点数:%d点\n",sum);
	return 0;
}
