#include<stdio.h>
#include<stdlib.h>

struct time {
	int hour;
	int minute;
	int second;
} t1, t2;

int main(){
	printf("時刻1の時　分　秒を入力：");
	scanf("%d",&t1.hour);
	scanf("%d",&t1.minute);
	scanf("%d",&t1.second);

	printf("時刻2の時　分　秒を入力：");
	scanf("%d",&t2.hour);
	scanf("%d",&t2.minute);
	scanf("%d",&t2.second);

	int sec1 = t1.hour*3600 + t1.minute*60 + t1.second;
	int sec2 = t2.hour*3600 + t2.minute*60 + t2.second;
	int diff = abs(sec1-sec2);

	int hour = diff/3600, minute = (diff%3600)/60, second = diff%60;

	printf("時間差は：%d時間%d分%d秒です。\n",hour,minute,second);

	return 0;
}
