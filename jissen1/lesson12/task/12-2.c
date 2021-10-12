#include<stdio.h>

struct club{
	char club_name[20];
	int club_code;
};

struct club data[20] = {
	{"英会話",1},
	{"英会話",1},
	{"英会話",1},
	{"英会話",1},
	{"英会話",1},
	{"演劇",2},
	{"演劇",2},
	{"演劇",2},
	{"登山",3},
	{"テニス",4},
	{"テニス",4},
	{"テニス",4},
	{"テニス",4},
	{"作曲",5},
	{"作曲",5},
	{"作曲",5},
	{"作曲",5},
	{"作曲",5},
	{"作曲",5},
	{"作曲",5},
};

int main(){
	int eng = 0, theatrics = 0, climbling = 0, tennis = 0, composition = 0;
	for(int i = 0; i < 20; i++){
		if(data[i].club_code == 1){
			eng++;
		} else if(data[i].club_code == 2){
			theatrics++;
		} else if(data[i].club_code == 3){
			climbling++;
		} else if(data[i].club_code == 4){
			tennis++;
		} else if(data[i].club_code == 5){
			composition++;
		}
	}

	printf("英会話\t：");
	for(int i = 0 ; i < eng; i++){
		printf("*");
	}
	printf("\n演劇\t：");
	for(int i = 0 ; i < theatrics; i++){
		printf("*");
	}
	printf("\n登山\t：");
	for(int i = 0 ; i < climbling; i++){
		printf("*");
	}
	printf("\nテニス\t：");
	for(int i = 0 ; i < tennis; i++){
		printf("*");
	}
	printf("\n作曲\t：");
	for(int i = 0 ; i < composition; i++){
		printf("*");
	}
	printf("\n");
	return 0;
}
