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
	int i = 0;
	while(1){
		printf("氏名　成績を入力>");
		scanf("%s %lf", name, &score);
		if(strcmp(name,"end") == 0 && score == 0) break;
		p += i;
		p = (struct student *)malloc(sizeof(struct student));
		p -= i;
		strcpy((p+i)->name,name);
		(p+i)->score = score;
		i++;
	}
	double max = 0;
	char max_name[30];
	for(int j = 0; j < i; j++){
		if(max < (p+j)->score){
			max = (p+j)->score;
			max_name[0] = '\0';
			strcpy(max_name,(p+j)->name);
		}
	}
	printf("これまでに入力された最も高かった成績を持つ学生は：");
	printf("%sさんです\n",max_name);
	for(int k = 0; k < i; k++){
		free(p);
		p++;
	}
	return 0;
}
