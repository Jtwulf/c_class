#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int input, answer;
	int i, j;
	int array[5][5];

	srand((unsigned)time(NULL));

	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			answer = rand()%(999 - 100+1) + 100;
			array[i][j] = answer;
			printf("%d ",array[i][j]);
		}
		printf("\n");
	}

	int x, y;
	printf("行番号 -> ");
	scanf("%d",&x);
	printf("列番号 -> ");
	scanf("%d",&y);

	printf("%d行目%d列目は%dです。\n",x,y,array[x-1][y-1]);
	return 0;
}
