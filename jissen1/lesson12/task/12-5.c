#include<stdio.h>

struct student{
	char name[10];
	int eng;
	int math;
	int c;
	int avg;
} data[4];

int main(){
	int max_index = 0;
	for(int i = 0; i < 4; i++){
		printf("No.%d name English Math C ->",i+1);
		scanf("%s",data[i].name);
		scanf("%d",&data[i].eng);
		scanf("%d",&data[i].math);
		scanf("%d",&data[i].c);
		data[i].avg = (data[i].eng+data[i].math+data[i].c)/3;
		if(data[max_index].avg < data[i].avg){
			max_index = i;
		}
	}

	printf("3教科の平均点が最も高い学生:");
	printf("%s %d %d %d\n",data[max_index].name,data[max_index].eng,data[max_index].math,data[max_index].c);
	return 0;
}
