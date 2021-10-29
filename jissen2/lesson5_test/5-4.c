#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct student {
	char name[30];
	double score;
};

int main(){
	char name[30];
	double score;
	struct student *p;
	int count = 0;
	while(1){
		printf("氏名　成績を入力>");
		scanf("%s %lf", name, &score);
		if(strcmp(name,"end") && score == 0) break;
		p = (struct student *)malloc(sizeof(struct student));
		strcpy(p->name,name);
		p->score = score;
		p++;
		count++;
	}
	p -= count;
	double max = 0;
	char max_name[30];
	for(int i = 0; i < count; i++){
		if(max < p->score){
			max = p->score;
			strcpy(max_name,p->name);
		}
	}
	printf("これまでに入力された最も高かった成績を持つ学生は：%sさんです\n",max_name);
	p -= count;
	free(p);
	return 0;
}
