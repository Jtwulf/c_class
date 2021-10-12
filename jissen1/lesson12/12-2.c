#include<stdio.h>

struct grades{
	char name[20];
	int score[3];
} data[4];

int main(){
	for(int i = 0; i < 4; i++){
		printf("No.%d name Japanese Math English ->",i+1);
		scanf("%s",data[i].name);
		for(int j = 0; j < 3; j++){
			scanf("%d",&data[i].score[j]);
		}
	}

	int sum;
	for(int i = 0; i < 4; i++){
		sum = 0;
		for(int j = 0; j < 3; j++){
			sum += data[i].score[j];
		}
		printf("%sさんの総合成績は%d\n",data[i].name,sum);
	}

	return 0;
}

