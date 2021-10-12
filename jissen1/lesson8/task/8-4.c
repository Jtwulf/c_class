#include<stdio.h>

int main(){
	int days_number[2][12]
		= {31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31};

	//データ入力
	int year, month, day;
	printf("年月日を入力してください\n年：");
	scanf("%d",&year);
	printf("月：");
	scanf("%d",&month);
	printf("日：");
	scanf("%d",&day);

	int count = 0;
	if(year % 400 == 0 || (year % 4 == 0 && year % 400 != 0)){
		int i;
		for(i = 0; i < month-1; i++){
			count += days_number[1][i];
		}
	} else {
		int i;
		for(i = 0; i < month-1; i++){
			count += days_number[0][i];
		}
	}

	count += day-1;

	printf("%d年1月1日からの経過日数は%d日\n",year,count);
	return 0;
}
