#include<stdio.h>

struct score{
	int english;
	int math;
	int japanese;
};

struct grades{
	char name[20];
	struct score scores;
}data[4];

int main(){
	for(int i = 0; i < 4; i++){
		printf("No.%d name Japanese Math English ->",i+1);
		scanf("%s",data[i].name);
		scanf("%d",&data[i].scores.japanese);
		scanf("%d",&data[i].scores.math);
		scanf("%d",&data[i].scores.english);
	}
	for(int i = 0; i < 4; i++){
		printf("%sさんの総合成績は%d\n",data[i].name,data[i].scores.japanese+data[i].scores.math+data[i].scores.english);
	}

	return 0;
}
