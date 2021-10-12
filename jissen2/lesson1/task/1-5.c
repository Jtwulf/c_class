#include<stdio.h>
#define N 20

typedef struct student_type{
	char name[N];
	int eng;
	int math;
	int c;
} student_type;

student_type top_student(student_type *student, int len){
	int max = 0;
	int sum;
	int top = 0;
	for(int i = 0; i < len; i++){
		sum = 0;
		sum = student[i].eng + student[i].math + student[i].c;
		if(max < sum){
			max = sum;
			top = i;
		}
	}
	return student[top];
}

int main(){
	student_type student[4];
	for(int i = 0; i < 4; i++){
		printf("input student%d [name english math c] -> ",i+1);
		scanf("%s",student[i].name);
		scanf("%d",&student[i].eng);
		scanf("%d",&student[i].math);
		scanf("%d",&student[i].c);
	}

	student_type top = top_student(student, 4);
	printf("name:%s\n",top.name);
	printf("english:%d\n",top.eng);
	printf("math:%d\n",top.math);
	printf("c:%d\n",top.c);

	return 0;
}
