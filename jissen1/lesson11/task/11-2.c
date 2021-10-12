#include<stdio.h>
#include<time.h>
#include<stdlib.h>

struct account{
	char name[20];
	int pin;
} data1;

int main(){
	printf("name -> ");
	scanf("%s",data1.name);

	srand((unsigned)time(NULL));
	data1.pin = rand()%(9999 - 1);

	printf("%d,%s\n",data1.pin,data1.name);
	return 0;
}
