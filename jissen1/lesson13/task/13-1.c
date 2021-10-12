#include<stdio.h>
#include<string.h>

typedef struct sc_student {
	char name[20];
	int age;
	double GPA;
} scs;

int main(){
	scs data[10], *student_p = data;
	for(int i = 0; i < 10; i++){
		printf("%d人目の学生情報を入力して下さい(氏名　年齢　GPAスコア):",i+1);
		scanf("%s",student_p->name);
		scanf("%d",&student_p->age);
		scanf("%lf",&student_p->GPA);
		student_p++;
	}

	student_p = data;
	double max_GPA = 0;
	for(int i = 0; i < 10; i++){
		if(student_p->age <= 20 && student_p->GPA > max_GPA)
			max_GPA = student_p->GPA;
		student_p++;
	}

	student_p = data;
	while(student_p->GPA != max_GPA){
		student_p ++;
	}

	printf("決定された奨学生は:氏名:%s, 年齢:%d, GPA:%3.1f\n",student_p->name,student_p->age,student_p->GPA);

	return 0;
}
