#include<stdio.h>
int main(){
	int year = 2019;
	int days;

	if(year % 4 == 0){
		days = 366;
	} else if(year % 100 == 0){
		days = 365;
	} else if(year % 4 == 0){
		days = 366;
	} else {
		days = 365;
	}

	int hours = days*24;
	printf("%d年は%d時間です。\n",year,hours);

	return 0;
}
