#include<stdio.h>
#include<string.h>

typedef struct ChristianEra{
	int year;
	int month;
   	int day;
} CE;

typedef struct JapneseCalendar{
	char era[20];
   	int year;
   	int month;
   	int day;
} JC;

JC sy_to_wy(CE *data);
JC wy;

int main(){
	CE *sy;
	JC wy;
	printf("西暦の年 月 日 を入力>");
	scanf("%d %d %d",&sy->year,&sy->month,&sy->day);

	wy = sy_to_wy(sy);

	printf("和暦は%s%d年%d月%d日です\n",wy.era,wy.year,wy.month,wy.day);

	return 0;
}

JC sy_to_wy(CE *data){
	JC wy;
	if(1868 <= data->year && data->year <= 1912 && data->month >= 9 && data->day >= 8){
		strcpy(wy.era,"明治");
		wy.year = data->year-1868+1;
	} else if(1912 <= data->year && data->year <= 1926 && data->month >= 7 && data->day >= 30){
		strcpy(wy.era,"大正");
		wy.year = data->year-1912+1;
	} else if(1926 <= data->year && data->year <= 1989 && data->month >= 12 && data->day >= 25){
		strcpy(wy.era,"昭和");
		wy.year = data->year-1926+1;
	} else if(1989 <= data->year && data->month >= 1 && data->day >= 8){
		strcpy(wy.era,"平成");
		wy.year = data->year-1989+1;
	}
	return wy;
}
