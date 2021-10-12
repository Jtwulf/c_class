#include<stdio.h>
#define N 1024

typedef struct student{
	int number;
	char name[N];
	struct student *next;
} student;

int main(){
	student list[3];
	printf("学生1>");
	scanf("%d %s",&list[0].number, list[0].name);
	list[0].next = &list[1];
	printf("学生2>");
	scanf("%d %s",&list[1].number, list[1].name);
	list[1].next = &list[2];
	printf("学生3>");
	scanf("%d %s",&list[2].number, list[2].name);


	return 0;
}
