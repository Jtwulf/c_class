#include<stdio.h>

struct birthday {
	int month;
	int day;
} birthday1, birthday2;

int birthday_comp(struct birthday birthday1, struct birthday birthday2);

int main(){
	printf("[birthday1] month day ->");
	scanf("%d %d",&birthday1.month,&birthday1.day);
	printf("[birthday2] month day ->");
	scanf("%d %d",&birthday2.month,&birthday2.day);

	int comp = birthday_comp(birthday1,birthday2);
	if(comp == 1)
		printf("学生1の誕生日が早いです\n");
	else if(comp == -1)
		printf("学生2の誕生日が早いです\n");
	else
		printf("両者の誕生日が同じです\n");
	return 0;
}

int birthday_comp(struct birthday birthday1, struct birthday birthday2){
	if(birthday1.month > birthday2.month)
		return -1;
	else if(birthday2.month > birthday1.month)
		return 1;
	else if(birthday1.month == birthday2.month){
		if(birthday1.day > birthday2.day)
			return -1;
		else if(birthday2.day > birthday1.day)
			return 1;
		else
			return 0;
	}
}
