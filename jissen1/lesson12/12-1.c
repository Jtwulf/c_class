#include<stdio.h>

struct grades{
	char name[20];
	int japanese;
	int math;
	int english;
} data[4];

int main(){
	for(int i = 0; i < 4; i++){
		printf("No.%d name Japanese Math English ->",i+1);
		scanf("%s",data[i].name);
		scanf("%d",&data[i].japanese);
		scanf("%d",&data[i].math);
		scanf("%d",&data[i].english);
	}
	for(int i = 0; i < 4; i++){
		printf("%sさんの総合成績は%d\n",data[i].name,data[i].japanese+data[i].math+data[i].english);
	}

	return 0;
}
