#include<stdio.h>
#include<string.h>

typedef struct student{
	char name[20];
	int eng;
	int math;
	int c;
} student_type;

int top_student(student_type[]);

int main(){
	student_type data[4];
	for(int i = 0; i < 4; i++){
		printf("student[%d] name english math c_programming -> ",i);
		scanf("%s",data[i].name);
		scanf("%d",&data[i].eng);
		scanf("%d",&data[i].math);
		scanf("%d",&data[i].c);
	}

	int top_student_index = top_student(data);
	printf("%s %d %d %d\n",data[top_student_index].name,data[top_student_index].eng,data[top_student_index].math,data[top_student_index].c);

	return 0;
}

int top_student(student_type data[]){
	int max = 0, index = 0;
	for(int i=0; i<4; i++){
		if(max < data[i].eng+data[i].math+data[i].c){
        	max = data[i].eng+data[i].math+data[i].c;
        	index = i;
		}
	}
	return index;
}
