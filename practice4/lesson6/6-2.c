#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

struct student {
	char name[30];
	int year;
	double GPA;
};

int main(){
	struct student *p[5];
	char max_student_name[30];
	double max = 0;
	int max_index;

	for(int i = 0; i < 5; i++){
		p[i] = (struct student *)malloc(sizeof(struct student));
		if(p == NULL){
			printf("メモリを確保できませんでした\n");
			return 0;
		}
		printf("input [name year GPA] -> ");
		scanf("%s",p[i]->name);
		scanf("%d",&p[i]->year);
		scanf("%lf",&p[i]->GPA);
		if(p[i]->year <= 3 && max <= p[i]->GPA){
			max = p[i]->GPA;
			max_index = i;
		}
	}
	printf("name:%s\nGPA:%lf\n",p[max_index]->name,p[max_index]->GPA);
	free(*p);
	return 0;
}
