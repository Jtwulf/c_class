#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct account{
	char name[20];
	int pin;
} data[5];

int main(){
	srand((unsigned)time(NULL));
	for(int i = 0; i < 5; i++){
		printf("%d人目の名前：",i+1);
		scanf("%s",data[i].name);
		data[i].pin = rand()%(9999-1);
	}

	for(int i = 0; i < 5; i++){
		printf("name = %s, pin = %d\n",data[i].name,data[i].pin);
	}
	return 0;
}
