#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define N 12

typedef struct s_detail{
	char day[N];
	int time;
	char classroom[N];
} detail;

typedef struct s_diff{
	//aとbが同じならtrue,違うならfalse
	bool day;
	bool time;
	bool classroom;
} diff;

int main(){
	detail a, b;
	diff ab;
	ab.day = false;
	ab.time= false;
	ab.classroom = false;

	printf("講義1の開講情報:\n");
	printf("曜日を入力>");
	scanf("%s",a.day);
	printf("時限を入力>");
	scanf("%d",&a.time);
	printf("教室を入力>");
	scanf("%s",a.classroom);

	printf("講義2の開講情報:\n");
	printf("曜日を入力>");
	scanf("%s",b.day);
	printf("時限を入力>");
	scanf("%d",&b.time);
	printf("教室を入力>");
	scanf("%s",b.classroom);

	if(strcmp(a.day,b.day) == 0) ab.day = true;
	if(a.time == b.time) ab.time = true;
	if(strcmp(a.classroom,b.classroom) == 0) ab.classroom = true;

	if(ab.day && ab.time && ab.classroom){
		printf("バッティングします！\n");
	} else {
		printf("バッティングしません！\n");
		if(!ab.day) printf("曜日が違います\n");
		if(!ab.time) printf("時限が違います\n");
		if(!ab.classroom) printf("教室が違います\n");
	}

	return 0;
}
