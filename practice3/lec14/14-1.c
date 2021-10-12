#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct salt_solution {
	int water;
	int salt;
} ;

int main(){
	struct salt_solution list[10];
	srand((unsigned)time(NULL));
	for(int i = 0; i < 10; i++){
		list[i].water = rand()%(500 - 100 + 1) + 100;
		list[i].salt = rand()%(list[i].water + 1);
	}

	double con = (double)list[0].salt / (double)(list[0].water+list[0].salt);
	int index = 0;

	for(int i = 1; i < 10; i++){
		if(con < (double)list[i].salt / (double)(list[i].water+list[i].salt)){
			con = (double)list[i].salt / (double)(list[i].water+list[i].salt);
			index = i;
		}
	}

	printf("water:%d salt:%d concentration:%f\n",list[index].water,list[index].salt,con);
	return 0;
}
