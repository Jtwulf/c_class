#include<stdio.h>

struct weekly_cost {
	char day[20];
	int day_code; //曜日を判別するためのコード
	int spended_cost;
	char type[30];
};

struct weekly_cost data[10] = {
	{"月曜日",0,800,"昼飯代"},
	{"火曜日",1,500,"昼飯代"},
	{"火曜日",1,900,"夕食代"},
	{"水曜日",2,150,"電車賃"},
	{"木曜日",3,130,"ジュース代"},
	{"木曜日",3,150,"電車賃"},
	{"木曜日",3,600,"昼飯代"},
	{"金曜日",4,1000,"夕食代"},
	{"土曜日",5,400,"電車賃"},
	{"日曜日",6,550,"カラオケ"},
};

int main(){
	int sum [7], max = 0, index;
	for(int i = 0; i < 7; i++){
		sum[i] = 0;
		for(int j = 0; j <= 10; j++){
			if(i == data[j].day_code){
				sum[i] += data[j].spended_cost;
			}
		}
		if(max < sum[i]){
			max = sum[i];
			index = i;
		}
	}

	printf("最も支出の多かった曜日は");

	for(int i = 0; i < 10; i++){
		if(index == data[i].day_code){
			printf("%s",data[i].day);
			break;
		}
	}

	printf("(%d円)です\n",max);

	return 0;
}
