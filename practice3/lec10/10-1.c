#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand((unsigned)time(NULL));

	int array[100], count[100];
	for(int i = 0; i < 100; i++){
		array[i] = rand()%(99 - 1);
	}

	for(int i = 0; i < 100; i++){
		count[i] = 0;
		for(int j = 0; j < 100; j++){
			if(i == array[j]){
				count[i] ++;
			}
		}
	}

	for(int i = 0; i < 100; i++){
		printf("[%d] = %d\n",i,count[i]);
	}

	return 0;
}
