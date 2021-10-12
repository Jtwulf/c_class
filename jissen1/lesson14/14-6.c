#include<stdio.h>
#include<string.h>

typedef struct student {
	char name[15];
	double GPA;
	int credits;
} sstudent;

int main(){
	sstudent data[4];
	for(int i = 0; i < 4; i++){
		printf("data[%d] name GPA credits ->",i+1);
		scanf("%s %lf %d",data[i].name,&data[i].GPA,&data[i].credits);
	}

	for(int i = 0; i < 4; i++){
		if(data[i].GPA >= 2.0 && data[i].credits >= 50){
			printf("%s\n",data[i].name);
		}
	}

	return 0;
}
